#ifndef IO_H
# define IO_H

class dungeon;

void io_init_terminal(void);
void io_reset_terminal(void);
void io_display(dungeon *d);
void io_handle_input(dungeon *d);
void io_queue_message(const char *format, ...);
void io_interact_vendor(dungeon *d);
bool isInRange(dungeon *d);
void io_display_itemsToSell(dungeon *d);
void io_display_vendorItems(dungeon* d);
void io_illuminate(dungeon*d, int delay);
void io_grenade_mode(dungeon *d);
int in_range(int row, int col);
void dynamite_animation(dungeon *d, int y, int x);
void display_stats(dungeon* d);



#endif
