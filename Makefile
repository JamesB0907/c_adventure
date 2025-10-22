.PHONY: all echo counter loops mirror pointer spellbook clean

# Build and run all modules
all: echo counter loops mirror pointer spellbook

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

# Clean all builds
clean:
	$(MAKE) -C echoes_from_the_void clean
	$(MAKE) -C mystic_counter clean
	$(MAKE) -C looping_labyrinth clean
	$(MAKE) -C memory_mirror clean
	$(MAKE) -C pointers_path clean
	$(MAKE) -C struct_scroll clean

# Usage:
#   make echo 		# Build and run Echoes from the Void
#   make counter 	# Build and run Mystic Counter
#   make loops      # Build and run Looping Labyrinth
#   make mirror     # Build and run Memory Mirror
#   make pointer    # Build and run Pointer Binding
#   make spellbook  # Build and run Spellbook
#   make all 		# Build and run both modules
#   make clean 		# Clean all builds