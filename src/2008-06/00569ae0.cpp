// from server: 82% by EspClaude
// roc 2008-06 00569ae0  unit: RBX::StandardOut  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569ae0
//
// 00569ae0  55                   push ebp
// 00569ae1  8bec                 mov ebp, esp
// 00569ae3  6aff                 push -1
// 00569ae5  686cf97c00           push 0x7cf96c
// 00569aea  64a100000000         mov eax, dword ptr fs:[0]
// 00569af0  50                   push eax
// 00569af1  64892500000000       mov dword ptr fs:[0], esp
// 00569af8  81ec90000000         sub esp, 0x90
// 00569afe  53                   push ebx
// 00569aff  56                   push esi
// 00569b00  57                   push edi
// 00569b01  8bf1                 mov esi, ecx
// 00569b03  33ff                 xor edi, edi
// 00569b05  8965f0               mov dword ptr [ebp - 0x10], esp
// 00569b08  8975e8               mov dword ptr [ebp - 0x18], esi
// 00569b0b  897dec               mov dword ptr [ebp - 0x14], edi
// 00569b0e  397e30               cmp dword ptr [esi + 0x30], edi
// 00569b11  7411                 je 0x569b24
// 00569b13  837e3410             cmp dword ptr [esi + 0x34], 0x10
// 00569b17  7205                 jb 0x569b1e
// 00569b19  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00569b1c  eb03                 jmp 0x569b21
// 00569b1e  8d7e20               lea edi, [esi + 0x20]
// 00569b21  897dec               mov dword ptr [ebp - 0x14], edi
// 00569b24  6a01                 push 1
// 00569b26  6a01                 push 1
// 00569b28  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 00569b2e  ff15a4248000         call dword ptr [0x8024a4]
// 00569b34  a174629400           mov eax, dword ptr [0x946274]
// 00569b39  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00569b40  c645fc01             mov byte ptr [ebp - 4], 1
// 00569b44  85c0                 test eax, eax
// 00569b46  753d                 jne 0x569b85
// 00569b48  8b4508               mov eax, dword ptr [ebp + 8]
// 00569b4b  50                   push eax
// 00569b4c  57                   push edi
// 00569b4d  6a00                 push 0
// 00569b4f  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 00569b55  51                   push ecx
// 00569b56  6a00                 push 0
// 00569b58  8bce                 mov ecx, esi
// 00569b5a  e8d1000900           call 0x5f9c30

// from server: 81% by king_originala
// roc 2008-06 00569ae0  unit: RBX::StandardOut  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569ae0
//
// 00569ae0  55                   push ebp
// 00569ae1  8bec                 mov ebp, esp
// 00569ae3  6aff                 push -1
// 00569ae5  686cf97c00           push 0x7cf96c
// 00569aea  64a100000000         mov eax, dword ptr fs:[0]
// 00569af0  50                   push eax
// 00569af1  64892500000000       mov dword ptr fs:[0], esp
// 00569af8  81ec90000000         sub esp, 0x90
// 00569afe  53                   push ebx
// 00569aff  56                   push esi
// 00569b00  57                   push edi
// 00569b01  8bf1                 mov esi, ecx
// 00569b03  33ff                 xor edi, edi
// 00569b05  8965f0               mov dword ptr [ebp - 0x10], esp
// 00569b08  8975e8               mov dword ptr [ebp - 0x18], esi
// 00569b0b  897dec               mov dword ptr [ebp - 0x14], edi
// 00569b0e  397e30               cmp dword ptr [esi + 0x30], edi
// 00569b11  7411                 je 0x569b24
// 00569b13  837e3410             cmp dword ptr [esi + 0x34], 0x10
// 00569b17  7205                 jb 0x569b1e
// 00569b19  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00569b1c  eb03                 jmp 0x569b21
// 00569b1e  8d7e20               lea edi, [esi + 0x20]
// 00569b21  897dec               mov dword ptr [ebp - 0x14], edi
// 00569b24  6a01                 push 1
// 00569b26  6a01                 push 1
// 00569b28  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 00569b2e  ff15a4248000         call dword ptr [0x8024a4]
// 00569b34  a174629400           mov eax, dword ptr [0x946274]
// 00569b39  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00569b40  c645fc01             mov byte ptr [ebp - 4], 1
// 00569b44  85c0                 test eax, eax
// 00569b46  753d                 jne 0x569b85
// 00569b48  8b4508               mov eax, dword ptr [ebp + 8]
// 00569b4b  50                   push eax
// 00569b4c  57                   push edi
// 00569b4d  6a00                 push 0
// 00569b4f  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 00569b55  51                   push ecx
// 00569b56  6a00                 push 0
// 00569b58  8bce                 mov ecx, esi
// 00569b5a  e8d1000900           call 0x5f9c30

struct StreamBase {
    char storage[80];
    ~StreamBase();
};

struct Stream : virtual StreamBase {
    char storage[48];
    __declspec(dllimport) Stream(int);
    ~Stream();
};

extern void* assertionHook;

struct S {
    char prefix[32];
    union {
        char text[16];
        char* heap;
    } name;
    unsigned length;
    unsigned capacity;

    void report(int, Stream*, int, const char*, const char*);
    void f(const char*);
};

void S::f(const char* message)
{
    const char* text = 0;
    if (length != 0) {
        if (capacity >= 16)
            text = name.heap;
        else
            text = name.text;
    }

    Stream stream(1);
    try {
        if (assertionHook == 0)
            report(0, &stream, 0, text, message);
    }
    catch (...) {
        report(0, &stream, 0, text, message);
    }
}
