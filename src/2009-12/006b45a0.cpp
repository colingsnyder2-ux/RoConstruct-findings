// roc 2009-12 006b45a0  unit: RBX::VStockSound::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b45a0
//
// 006b45a0  8b442404             mov eax, dword ptr [esp + 4]
// 006b45a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006b45a8  53                   push ebx
// 006b45a9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006b45ad  56                   push esi
// 006b45ae  8bf1                 mov esi, ecx
// 006b45b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b45b4  57                   push edi
// 006b45b5  894e04               mov dword ptr [esi + 4], ecx
// 006b45b8  8d7e0c               lea edi, [esi + 0xc]
// 006b45bb  53                   push ebx
// 006b45bc  8bcf                 mov ecx, edi
// 006b45be  8906                 mov dword ptr [esi], eax
// 006b45c0  895608               mov dword ptr [esi + 8], edx
// 006b45c3  ff15f0b69800         call dword ptr [0x98b6f0]
// 006b45c9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006b45cc  89471c               mov dword ptr [edi + 0x1c], eax
// 006b45cf  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006b45d2  894f20               mov dword ptr [edi + 0x20], ecx
// 006b45d5  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 006b45d8  895f24               mov dword ptr [edi + 0x24], ebx
// 006b45db  85db                 test ebx, ebx
// 006b45dd  740c                 je 0x6b45eb
// 006b45df  83c304               add ebx, 4
// 006b45e2  ba01000000           mov edx, 1
// 006b45e7  f00fc113             lock xadd dword ptr [ebx], edx
// 006b45eb  8a442420             mov al, byte ptr [esp + 0x20]
// 006b45ef  884634               mov byte ptr [esi + 0x34], al
// 006b45f2  5f                   pop edi
// 006b45f3  c6463500             mov byte ptr [esi + 0x35], 0
// 006b45f7  8bc6                 mov eax, esi
// 006b45f9  5e                   pop esi
// 006b45fa  5b                   pop ebx
// 006b45fb  c21400               ret 0x14
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