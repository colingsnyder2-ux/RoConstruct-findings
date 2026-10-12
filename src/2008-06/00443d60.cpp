// from server: 73% by king_originala
extern "C" void (__cdecl * const _invalid_parameter_noinfo)();

struct Entry {
    struct Receiver {
        virtual void apply(void *, void *) = 0;
    };
    Receiver *receiver;
    void *argument;
    unsigned long value[2];
};

struct Sequence;

struct Iterator {
    Sequence **owner;
    Entry *position;

    Iterator(Sequence **, Entry *);
    bool operator!=(const Iterator &) const;
};

struct Sequence {
    Sequence **owner;
    unsigned long reserved[2];
    Entry *first;
    Entry *last;
    Entry *limit;

    Iterator begin();
    Iterator end();
    Iterator erase(Iterator, Iterator);
};

struct Binder {
    unsigned long reserved;
    Sequence entries;

    bool flush();
};

__forceinline Iterator::Iterator(Sequence **o, Entry *p)
    : owner(o), position(p) {}

__forceinline bool Iterator::operator!=(const Iterator &other) const {
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

__forceinline Iterator Sequence::begin() {
    Entry *p = first;
    if (p > last)
        _invalid_parameter_noinfo();
    return Iterator(owner, p);
}

__forceinline Iterator Sequence::end() {
    Entry *p = last;
    if (first > p)
        _invalid_parameter_noinfo();
    return Iterator(owner, p);
}

bool Binder::flush() {
    Iterator it = entries.begin();
    while (it != entries.end()) {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        Sequence *sequence;

        if (it.owner)
            goto owner1;
        invalid();
        sequence = 0;
    check1:
        if (it.position >= sequence->last)
            invalid();

        if (it.owner)
            goto owner2;
        invalid();
        sequence = 0;
    check2:
        if (it.position >= sequence->last)
            invalid();

        if (it.owner)
            goto owner3;
        invalid();
        sequence = 0;
    check3:
        if (it.position >= sequence->last)
            invalid();

        it.position->receiver->apply(it.position->argument,
                                    &it.position->value);

        if (it.owner)
            goto owner4;
        invalid();
        sequence = 0;
    check4:
        if (it.position >= sequence->last)
            invalid();
        ++it.position;
        continue;

    owner1:
        sequence = *it.owner;
        goto check1;
    owner2:
        sequence = *it.owner;
        goto check2;
    owner3:
        sequence = *it.owner;
        goto check3;
    owner4:
        sequence = *it.owner;
        goto check4;
    }
    entries.erase(entries.begin(), entries.end());
    return true;
}
