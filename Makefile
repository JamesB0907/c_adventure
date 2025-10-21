.PHONY: all echo counter loops clean

# Build and run all modules
all: echo counter

# Echoes from the Void
echo:
	$(MAKE) -C echoes_from_the_void ritual
	$(MAKE) -C echoes_from_the_void summon

# Mystic Counter
counter:
	$(MAKE) -C mystic_counter ritual
	$(MAKE) -C mystic_counter summon

# Clean all builds
clean:
	$(MAKE) -C echoes_from_the_void clean
	$(MAKE) -C mystic_counter clean

loops:
	$(MAKE) -C looping_labyrinth ritual
	$(MAKE) -C looping_labyrinth summon

# Usage:
#   make echo 		# Build and run Echoes from the Void
#   make counter 	# Build and run Mystic Counter
#   make loops      # Build and run Looping Labyrinth
#   make all 		# Build and run both modules
#   make clean 		# Clean all builds