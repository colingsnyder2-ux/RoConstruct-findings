// from server: 68% by king_originala
struct Entry {
    unsigned int value;
    float key;
};

void __cdecl insertion_sort(Entry* first, Entry* last)
{
    if (first != last) {
        for (Entry* next = first + 1; next != last; ++next) {
            Entry value = *next;
            Entry* hole = next;

            if (first->key > value.key) {
                Entry* source = next;
                while (first != source) {
                    --source;
                    source[1] = *source;
                }
                *first = value;
            } else {
                Entry* previous = next;
                for (;;) {
                    --previous;
                    if (!(previous->key > value.key))
                        break;
                    *hole = *previous;
                    hole = previous;
                }
                *hole = value;
            }
        }
    }
}
