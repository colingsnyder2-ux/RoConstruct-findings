// from server: 76% by king_originala
struct Result {
    void clear();
};

struct Entry {
    Result* get();
};

struct ClearStarterpack {
    unsigned char padding[12];
    Entry* volatile entry;

    void prepare();
    void run(void*);
};

void ClearStarterpack::run(void*)
{
    Entry* saved = entry;
    prepare();
    Entry* current = entry;
    if (current) {
        Result* result = current->get();
        if (result)
            result->clear();
    }
}
