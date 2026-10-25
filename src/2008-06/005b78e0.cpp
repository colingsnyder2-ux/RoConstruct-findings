// from server: 100% by colin
// roc 2008-06 005b78e0  unit: VStockSound::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b78e0
//
// 005b78e0  8b442404             mov eax, dword ptr [esp + 4]
// 005b78e4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b78e8  53                   push ebx
// 005b78e9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005b78ed  56                   push esi
// 005b78ee  8bf1                 mov esi, ecx
// 005b78f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b78f4  57                   push edi
// 005b78f5  894e04               mov dword ptr [esi + 4], ecx
// 005b78f8  8d7e0c               lea edi, [esi + 0xc]
// 005b78fb  53                   push ebx
// 005b78fc  8bcf                 mov ecx, edi
// 005b78fe  8906                 mov dword ptr [esi], eax
// 005b7900  895608               mov dword ptr [esi + 8], edx
// 005b7903  ff155c248000         call dword ptr [0x80245c]
// 005b7909  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005b790c  89471c               mov dword ptr [edi + 0x1c], eax
// 005b790f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 005b7912  894f20               mov dword ptr [edi + 0x20], ecx
// 005b7915  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 005b7918  895f24               mov dword ptr [edi + 0x24], ebx
// 005b791b  85db                 test ebx, ebx
// 005b791d  740c                 je 0x5b792b
// 005b791f  83c304               add ebx, 4
// 005b7922  ba01000000           mov edx, 1
// 005b7927  f00fc113             lock xadd dword ptr [ebx], edx
// 005b792b  8a442420             mov al, byte ptr [esp + 0x20]
// 005b792f  884634               mov byte ptr [esi + 0x34], al
// 005b7932  5f                   pop edi
// 005b7933  c6463500             mov byte ptr [esi + 0x35], 0
// 005b7937  8bc6                 mov eax, esi
// 005b7939  5e                   pop esi
// 005b793a  5b                   pop ebx
// 005b793b  c21400               ret 0x14

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
