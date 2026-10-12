// from server: 83% by king_originala
extern void __cdecl initialize(void (__cdecl*)(), void*);
extern void __cdecl initializeFlagType();
extern void __cdecl initializeObjectType();
extern unsigned __cdecl flagTypeIndex();
extern void* __cdecl objectType();
extern char flagTypeGuard;
extern char objectTypeGuard;
extern void (__cdecl* invalidParameter)();

struct Control {
    void* value;
    void operator=(const Control&);
};

struct Value {
    void* object;
    Control control;
    Value();
    Value(const Value&);
};

inline Value::Value() {
    object = 0;
    control.value = 0;
}

struct Shared {
    void* object;
    Control control;
    ~Shared();
};

struct Cache {
    char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned, Value);
    unsigned size() const;
    Value& at(unsigned, void (__cdecl*)());
};

inline unsigned Cache::size() const {
    return static_cast<unsigned>(last - first);
}

inline Value& Cache::at(unsigned index, void (__cdecl* handler)()) {
    Value* end = *reinterpret_cast<Value* const volatile*>(&last);
    if (index >= static_cast<unsigned>(end - first))
        handler();
    return first[index];
}

struct Flag {
    char padding[0x190];
    Cache cache;

    Shared findObject(void*);
    void* get();
};

void* Flag::get() {
    initialize(initializeFlagType, &flagTypeGuard);
    unsigned index = flagTypeIndex();
    unsigned count = cache.size();
    void (__cdecl* handler)() = invalidParameter;
    Cache& entries = cache;

    if (index + 1 > count) {
        entries.resize(index + 1, Value());
    } else {
        void* result = entries.at(index, handler).object;
        if (result)
            return result;
    }

    initialize(initializeObjectType, &objectTypeGuard);
    Shared found = findObject(objectType());
    if (!found.object)
        return 0;

    void* result = found.object;
    Value& destination = entries.at(index, handler);
    destination.object = found.object;
    destination.control = found.control;
    return result;
}
