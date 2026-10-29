// roc 2011-06 0059f230  unit: RBX::P8NetworkSettings::?$GetSetImpl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f230
//
// 0059f230  8b442404             mov eax, dword ptr [esp + 4]
// 0059f234  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059f238  53                   push ebx
// 0059f239  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0059f23d  56                   push esi
// 0059f23e  8bf1                 mov esi, ecx
// 0059f240  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059f244  57                   push edi
// 0059f245  894e04               mov dword ptr [esi + 4], ecx
// 0059f248  8d7e0c               lea edi, [esi + 0xc]
// 0059f24b  53                   push ebx
// 0059f24c  8bcf                 mov ecx, edi
// 0059f24e  8906                 mov dword ptr [esi], eax
// 0059f250  895608               mov dword ptr [esi + 8], edx
// 0059f253  ff15c804a400         call dword ptr [0xa404c8]
// 0059f259  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0059f25c  89471c               mov dword ptr [edi + 0x1c], eax
// 0059f25f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0059f262  894f20               mov dword ptr [edi + 0x20], ecx
// 0059f265  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 0059f268  895f24               mov dword ptr [edi + 0x24], ebx
// 0059f26b  85db                 test ebx, ebx
// 0059f26d  740c                 je 0x59f27b
// 0059f26f  83c304               add ebx, 4
// 0059f272  ba01000000           mov edx, 1
// 0059f277  f00fc113             lock xadd dword ptr [ebx], edx
// 0059f27b  8a442420             mov al, byte ptr [esp + 0x20]
// 0059f27f  884634               mov byte ptr [esi + 0x34], al
// 0059f282  5f                   pop edi
// 0059f283  c6463500             mov byte ptr [esi + 0x35], 0
// 0059f287  8bc6                 mov eax, esi
// 0059f289  5e                   pop esi
// 0059f28a  5b                   pop ebx
// 0059f28b  c21400               ret 0x14
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