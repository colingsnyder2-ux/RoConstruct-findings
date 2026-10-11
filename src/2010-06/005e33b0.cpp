// from server: 56% by atomic.potato
extern "C" void construct_string(void*, const char*);
extern "C" void initialize_filtered_selection(void*);

struct FilteredSelection
{
    int value;
    FilteredSelection(void*);
};

FilteredSelection::FilteredSelection(void* p)
{
    char buffer[28];
    construct_string(buffer, "Duplicate Group");
    initialize_filtered_selection(this);
    value = 0xA2E444;
}
