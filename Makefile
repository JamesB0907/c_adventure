.PHONY: all echo counter loops mirror pointer spellbook crystals forge clean

# Build and run all modules
all: echo counter loops mirror pointer spellbook crystals forge

# Echoes from the Void
echo:
	$(MAKE) -C echoes_from_the_void ritual
	$(MAKE) -C echoes_from_the_void summon

# Mystic Counter
counter:
	$(MAKE) -C mystic_counter ritual
	$(MAKE) -C mystic_counter summon

# Looping Labyrinth
loops:
	$(MAKE) -C looping_labyrinth ritual
	$(MAKE) -C looping_labyrinth summon

# Memory Mirror
mirror:
	$(MAKE) -C memory_mirror ritual
	$(MAKE) -C memory_mirror summon

# Pointer Binding
pointer:
	$(MAKE) -C pointers_path ritual
	$(MAKE) -C pointers_path summon

# Spellbook
spellbook:
	$(MAKE) -C struct_scroll ritual
	$(MAKE) -C struct_scroll summon

crystals:
	$(MAKE) -C dynamic_depths ritual
	$(MAKE) -C dynamic_depths summon

forge:
	$(MAKE) -C function_forge ritual
	$(MAKE) -C function_forge summon

# Clean all builds
clean:
	$(MAKE) -C echoes_from_the_void clean
	$(MAKE) -C mystic_counter clean
	$(MAKE) -C looping_labyrinth clean
	$(MAKE) -C memory_mirror clean
	$(MAKE) -C pointers_path clean
	$(MAKE) -C struct_scroll clean
	$(MAKE) -C dynamic_depths clean
	$(MAKE) -C function_forge clean

# Usage:
#   make echo 		# Build and run Echoes from the Void
#   make counter 	# Build and run Mystic Counter
#   make loops      # Build and run Looping Labyrinth
#   make mirror     # Build and run Memory Mirror
#   make pointer    # Build and run Pointer Binding
#   make spellbook  # Build and run Spellbook
#   make crystals   # Build and run Dynamic Depths
#   make forge      # Build and run Function Forge

#   make all 		# Build and run both modules
#   make clean 		# Clean all builds