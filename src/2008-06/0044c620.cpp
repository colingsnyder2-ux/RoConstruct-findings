// from server: 100% by colin
// roc 2008-06 0044c620  unit: CRobloxModule  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c620
//
// 0044c620  6aff                 push -1
// 0044c622  68ba127c00           push 0x7c12ba
// 0044c627  64a100000000         mov eax, dword ptr fs:[0]
// 0044c62d  50                   push eax
// 0044c62e  64892500000000       mov dword ptr fs:[0], esp
// 0044c635  83ec40               sub esp, 0x40
// 0044c638  56                   push esi
// 0044c639  57                   push edi
// 0044c63a  8d442410             lea eax, [esp + 0x10]
// 0044c63e  68606b8100           push 0x816b60
// 0044c643  50                   push eax
// 0044c644  e8c7d40b00           call 0x509b10
// 0044c649  83c408               add esp, 8
// 0044c64c  8bf8                 mov edi, eax
// 0044c64e  8b0d4c6b9700         mov ecx, dword ptr [0x976b4c]
// 0044c654  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0044c65c  85c9                 test ecx, ecx
// 0044c65e  740a                 je 0x44c66a
// 0044c660  8b11                 mov edx, dword ptr [ecx]
// 0044c662  8b02                 mov eax, dword ptr [edx]
// 0044c664  ffd0                 call eax
// 0044c666  8bf0                 mov esi, eax
// 0044c668  eb02                 jmp 0x44c66c
// 0044c66a  33f6                 xor esi, esi
// 0044c66c  8bcf                 mov ecx, edi
// 0044c66e  ff1564248000         call dword ptr [0x802464]
// 0044c674  50                   push eax
// 0044c675  6a00                 push 0
// 0044c677  8bce                 mov ecx, esi
// 0044c679  e872a81500           call 0x5a6ef0
// 0044c67e  8d4c2410             lea ecx, [esp + 0x10]
// 0044c682  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0044c68a  ff1568248000         call dword ptr [0x802468]
// 0044c690  8d4c2408             lea ecx, [esp + 8]
// 0044c694  51                   push ecx
// 0044c695  e856ca1100           call 0x5690f0
// 0044c69a  83c404               add esp, 4
// 0044c69d  8b00                 mov eax, dword ptr [eax]
// 0044c69f  68d0c44400           push 0x44c4d0
// 0044c6a4  8bc8                 mov ecx, eax
// 0044c6a6  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0044c6ae  e8edf5ffff           call 0x44bca0
// 0044c6b3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044c6b7  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0044c6bf  85c0                 test eax, eax
// 0044c6c1  742c                 je 0x44c6ef
// 0044c6c3  8bf0                 mov esi, eax
// 0044c6c5  83c004               add eax, 4
// 0044c6c8  83caff               or edx, 0xffffffff
// 0044c6cb  f00fc110             lock xadd dword ptr [eax], edx
// 0044c6cf  751e                 jne 0x44c6ef
// 0044c6d1  8b06                 mov eax, dword ptr [esi]
// 0044c6d3  8b5004               mov edx, dword ptr [eax + 4]
// 0044c6d6  8bce                 mov ecx, esi
// 0044c6d8  ffd2                 call edx
// 0044c6da  8d4608               lea eax, [esi + 8]
// 0044c6dd  83c9ff               or ecx, 0xffffffff
// 0044c6e0  f00fc108             lock xadd dword ptr [eax], ecx
// 0044c6e4  7509                 jne 0x44c6ef
// 0044c6e6  8b16                 mov edx, dword ptr [esi]
// 0044c6e8  8b4208               mov eax, dword ptr [edx + 8]
// 0044c6eb  8bce                 mov ecx, esi
// 0044c6ed  ffd0                 call eax
// 0044c6ef  8d4c242c             lea ecx, [esp + 0x2c]
// 0044c6f3  68286b8100           push 0x816b28
// 0044c6f8  51                   push ecx
// 0044c6f9  e812d40b00           call 0x509b10
// 0044c6fe  83c408               add esp, 8
// 0044c701  8bf8                 mov edi, eax
// 0044c703  8b0d4c6b9700         mov ecx, dword ptr [0x976b4c]
// 0044c709  c744245002000000     mov dword ptr [esp + 0x50], 2
// 0044c711  85c9                 test ecx, ecx
// 0044c713  740a                 je 0x44c71f
// 0044c715  8b11                 mov edx, dword ptr [ecx]
// 0044c717  8b02                 mov eax, dword ptr [edx]
// 0044c719  ffd0                 call eax
// 0044c71b  8bf0                 mov esi, eax
// 0044c71d  eb02                 jmp 0x44c721
// 0044c71f  33f6                 xor esi, esi
// 0044c721  8bcf                 mov ecx, edi
// 0044c723  ff1564248000         call dword ptr [0x802464]
// 0044c729  50                   push eax
// 0044c72a  6a00                 push 0
// 0044c72c  8bce                 mov ecx, esi
// 0044c72e  e8bda71500           call 0x5a6ef0
// 0044c733  8d4c242c             lea ecx, [esp + 0x2c]
// 0044c737  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0044c73f  ff1568248000         call dword ptr [0x802468]
// 0044c745  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0044c749  5f                   pop edi
// 0044c74a  5e                   pop esi
// 0044c74b  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c752  83c44c               add esp, 0x4c
// 0044c755  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String {
    char storage[28];
    String(const char*, String*&);
    const char* c_str() const;
    ~String();
};

extern String* __cdecl makeString(String*, const char*);
extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *destroyString)(String*);

inline String::String(const char* text, String*& result) {
    result = makeString(this, text);
}

inline const char* String::c_str() const {
    return stringData(this);
}

inline String::~String() {
    destroyString(this);
}

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
    void release();
};

inline void ControlBlock::release() {
    if (_InterlockedDecrement(&references) == 0) {
        dispose();
        if (_InterlockedDecrement(&weakReferences) == 0)
            destroy();
    }
}

extern void __cdecl settingsCallback(const char*);

struct Settings {
    void enumerate(void (__cdecl *)(const char*));
};

struct SettingsHandle {
    Settings* object;
    ControlBlock* control;
    SettingsHandle(SettingsHandle*&);
    ~SettingsHandle();
};

extern SettingsHandle* __cdecl getSettings(SettingsHandle*);

inline SettingsHandle::SettingsHandle(SettingsHandle*& result) {
    result = getSettings(this);
}

inline SettingsHandle::~SettingsHandle() {
    if (control)
        control->release();
}

void __cdecl reportGlobalSettings() {
    {
        String* result;
        String text("GlobalSettings ---------------------------------------", result);
        Stream* stream = streamProvider ? streamProvider->getStream() : 0;
        stream->write(0, result->c_str());
    }
    {
        SettingsHandle* result;
        SettingsHandle settings(result);
        Settings* targetSettings = result->object;
        targetSettings->enumerate(settingsCallback);
    }
    {
        String* result;
        String text("End GlobalSettings -----------------------------------", result);
        Stream* stream = streamProvider ? streamProvider->getStream() : 0;
        stream->write(0, result->c_str());
    }
}
