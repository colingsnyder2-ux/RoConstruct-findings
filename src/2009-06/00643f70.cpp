// roc 2009-06 00643f70  unit: RBX::Soundscape::SoundChannel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643f70
//
// 00643f70  8b442404             mov eax, dword ptr [esp + 4]
// 00643f74  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00643f78  53                   push ebx
// 00643f79  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00643f7d  56                   push esi
// 00643f7e  8bf1                 mov esi, ecx
// 00643f80  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00643f84  57                   push edi
// 00643f85  894e04               mov dword ptr [esi + 4], ecx
// 00643f88  8d7e0c               lea edi, [esi + 0xc]
// 00643f8b  53                   push ebx
// 00643f8c  8bcf                 mov ecx, edi
// 00643f8e  8906                 mov dword ptr [esi], eax
// 00643f90  895608               mov dword ptr [esi + 8], edx
// 00643f93  ff15b8e48900         call dword ptr [0x89e4b8]
// 00643f99  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00643f9c  89471c               mov dword ptr [edi + 0x1c], eax
// 00643f9f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00643fa2  894f20               mov dword ptr [edi + 0x20], ecx
// 00643fa5  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00643fa8  895f24               mov dword ptr [edi + 0x24], ebx
// 00643fab  85db                 test ebx, ebx
// 00643fad  740c                 je 0x643fbb
// 00643faf  83c304               add ebx, 4
// 00643fb2  ba01000000           mov edx, 1
// 00643fb7  f00fc113             lock xadd dword ptr [ebx], edx
// 00643fbb  8a442420             mov al, byte ptr [esp + 0x20]
// 00643fbf  884634               mov byte ptr [esi + 0x34], al
// 00643fc2  5f                   pop edi
// 00643fc3  c6463500             mov byte ptr [esi + 0x35], 0
// 00643fc7  8bc6                 mov eax, esi
// 00643fc9  5e                   pop esi
// 00643fca  5b                   pop ebx
// 00643fcb  c21400               ret 0x14
// copied from an identical function in another client (function ??0S@@QAE@HHHABUPayload@@_N@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern String* (__thiscall *copyString)(String*, const String&);

struct String {
    char storage[28];
    String(const String&);
};

__forceinline String::String(const String& source)
{
    copyString(this, source);
}

struct Control {
    long unused;
    volatile long references;
};

struct Payload {
    String text;
    int value;
    void* object;
    Control* control;

    Payload(const Payload&);
};

__forceinline Payload::Payload(const Payload& source)
    : text(source.text),
      value(source.value),
      object(source.object),
      control(source.control)
{
    if (control) {
        volatile long* count = reinterpret_cast<volatile long*>(control);
        ++count;
        _InterlockedIncrement(count);
    }
}

struct S {
    int first;
    int second;
    int third;
    Payload payload;
    bool enabled;
    bool flag;

    S(int, int, int, const Payload&, bool);
};

S::S(int a, int b, int c, const Payload& source, bool state)
    : first(a),
      second(b),
      third(c),
      payload(source),
      enabled(state),
      flag(false)
{
}