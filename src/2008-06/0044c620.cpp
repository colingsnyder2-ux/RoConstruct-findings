// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    const char* c_str() const;
    ~String();
};

extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *destroyString)(String*);

inline const char* String::c_str() const {
    return stringData(this);
}

inline String::~String() {
    destroyString(this);
}

extern String __cdecl makeString(const char*);

struct Stream {
    Stream& write(int, const char*);
};

struct StreamProvider {
    virtual Stream* getStream() = 0;
};

extern StreamProvider* streamProvider;

struct ControlBlock {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;
};

extern void __cdecl settingsCallback(const char*);

struct Settings {
    void enumerate(void (__cdecl *)(const char*));
};

struct SettingsHandle {
    Settings* object;
    ControlBlock* control;
    ~SettingsHandle();
};

inline SettingsHandle::~SettingsHandle() {
    ControlBlock* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->references, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 0)
                p->destroy();
        }
    }
}

extern SettingsHandle __cdecl getSettings();

void __cdecl reportGlobalSettings() {
    {
        String text = makeString("GlobalSettings ---------------------------------------");
        Stream* stream = streamProvider ? streamProvider->getStream() : 0;
        stream->write(0, text.c_str());
    }
    {
        SettingsHandle settings = getSettings();
        settings.object->enumerate(settingsCallback);
    }
    {
        String text = makeString("End GlobalSettings -----------------------------------");
        Stream* stream = streamProvider ? streamProvider->getStream() : 0;
        stream->write(0, text.c_str());
    }
}
