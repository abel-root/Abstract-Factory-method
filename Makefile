CXX=g++
CXXFLAGS= -std=c++20 -Wall -Wextra -Iinclude -g
LDFLAGS=

# Répertoires
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build

# Nom de l'exécutable
TARGET = main

# Recherche des fichiers source .cpp
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Règle principale
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compilation des fichiers .cpp en .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création du dossier build si nécessaire
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Nettoyage
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Nettoyage complet
distclean: clean

# Evite les conflits avec des fichiers du même nom
.PHONY: all clean distclean
