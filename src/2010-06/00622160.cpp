// roc 2010-06 00622160  unit: RBX::VStockSound::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00622160
//
// 00622160  8b442404             mov eax, dword ptr [esp + 4]
// 00622164  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00622168  53                   push ebx
// 00622169  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0062216d  56                   push esi
// 0062216e  8bf1                 mov esi, ecx
// 00622170  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00622174  57                   push edi
// 00622175  894e04               mov dword ptr [esi + 4], ecx
// 00622178  8d7e0c               lea edi, [esi + 0xc]
// 0062217b  53                   push ebx
// 0062217c  8bcf                 mov ecx, edi
// 0062217e  8906                 mov dword ptr [esi], eax
// 00622180  895608               mov dword ptr [esi + 8], edx
// 00622183  ff150ca49e00         call dword ptr [0x9ea40c]
// 00622189  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0062218c  89471c               mov dword ptr [edi + 0x1c], eax
// 0062218f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00622192  894f20               mov dword ptr [edi + 0x20], ecx
// 00622195  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 00622198  895f24               mov dword ptr [edi + 0x24], ebx
// 0062219b  85db                 test ebx, ebx
// 0062219d  740c                 je 0x6221ab
// 0062219f  83c304               add ebx, 4
// 006221a2  ba01000000           mov edx, 1
// 006221a7  f00fc113             lock xadd dword ptr [ebx], edx
// 006221ab  8a442420             mov al, byte ptr [esp + 0x20]
// 006221af  884634               mov byte ptr [esi + 0x34], al
// 006221b2  5f                   pop edi
// 006221b3  c6463500             mov byte ptr [esi + 0x35], 0
// 006221b7  8bc6                 mov eax, esi
// 006221b9  5e                   pop esi
// 006221ba  5b                   pop ebx
// 006221bb  c21400               ret 0x14
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