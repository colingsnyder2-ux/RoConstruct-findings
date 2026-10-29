// roc 2012-06 006935a0  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006935a0
//
// 006935a0  8b442404             mov eax, dword ptr [esp + 4]
// 006935a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006935a8  53                   push ebx
// 006935a9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006935ad  56                   push esi
// 006935ae  8bf1                 mov esi, ecx
// 006935b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006935b4  57                   push edi
// 006935b5  894e04               mov dword ptr [esi + 4], ecx
// 006935b8  8d7e0c               lea edi, [esi + 0xc]
// 006935bb  53                   push ebx
// 006935bc  8bcf                 mov ecx, edi
// 006935be  8906                 mov dword ptr [esi], eax
// 006935c0  895608               mov dword ptr [esi + 8], edx
// 006935c3  ff154426b200         call dword ptr [0xb22644]
// 006935c9  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006935cc  89471c               mov dword ptr [edi + 0x1c], eax
// 006935cf  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006935d2  894f20               mov dword ptr [edi + 0x20], ecx
// 006935d5  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 006935d8  895f24               mov dword ptr [edi + 0x24], ebx
// 006935db  85db                 test ebx, ebx
// 006935dd  740c                 je 0x6935eb
// 006935df  83c304               add ebx, 4
// 006935e2  ba01000000           mov edx, 1
// 006935e7  f00fc113             lock xadd dword ptr [ebx], edx
// 006935eb  8a442420             mov al, byte ptr [esp + 0x20]
// 006935ef  884634               mov byte ptr [esi + 0x34], al
// 006935f2  5f                   pop edi
// 006935f3  c6463500             mov byte ptr [esi + 0x35], 0
// 006935f7  8bc6                 mov eax, esi
// 006935f9  5e                   pop esi
// 006935fa  5b                   pop ebx
// 006935fb  c21400               ret 0x14
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