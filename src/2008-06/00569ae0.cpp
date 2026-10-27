// from server: 100% by coldek
// roc 2008-06 00569ae0  unit: RBX::StandardOut  size: 270 bytes
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
// 00569b5f  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 00569b65  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00569b6c  ff1540248000         call dword ptr [0x802440]
// 00569b72  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00569b75  5f                   pop edi
// 00569b76  5e                   pop esi
// 00569b77  64890d00000000       mov dword ptr fs:[0], ecx
// 00569b7e  5b                   pop ebx
// 00569b7f  8be5                 mov esp, ebp
// 00569b81  5d                   pop ebp
// 00569b82  c20400               ret 4
// 00569b85  83f801               cmp eax, 1
// 00569b88  75d5                 jne 0x569b5f
// 00569b8a  8b5508               mov edx, dword ptr [ebp + 8]
// 00569b8d  52                   push edx
// 00569b8e  57                   push edi
// 00569b8f  6a00                 push 0
// 00569b91  8d8564ffffff         lea eax, [ebp - 0x9c]
// 00569b97  50                   push eax
// 00569b98  6a00                 push 0
// 00569b9a  8bce                 mov ecx, esi
// 00569b9c  e8bfef0800           call 0x5f8b60
// 00569ba1  ebbc                 jmp 0x569b5f
// 00569ba3  a174629400           mov eax, dword ptr [0x946274]
// 00569ba8  85c0                 test eax, eax
// 00569baa  751c                 jne 0x569bc8
// 00569bac  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00569baf  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00569bb2  51                   push ecx
// 00569bb3  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00569bb6  52                   push edx
// 00569bb7  50                   push eax
// 00569bb8  8d8564ffffff         lea eax, [ebp - 0x9c]
// 00569bbe  50                   push eax
// 00569bbf  6a00                 push 0
// 00569bc1  e86a000900           call 0x5f9c30
// 00569bc6  eb20                 jmp 0x569be8
// 00569bc8  83f801               cmp eax, 1
// 00569bcb  751b                 jne 0x569be8
// 00569bcd  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00569bd0  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00569bd3  51                   push ecx
// 00569bd4  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00569bd7  52                   push edx
// 00569bd8  6a00                 push 0
// 00569bda  8d8564ffffff         lea eax, [ebp - 0x9c]
// 00569be0  50                   push eax
// 00569be1  6a00                 push 0
// 00569be3  e878ef0800           call 0x5f8b60
// 00569be8  b85f9b5600           mov eax, 0x569b5f
// 00569bed  c3                   ret 

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /GS- /EHsc /MD /O2 /Ob0 /Oy-
#include <sstream>
extern int assertionHook;
struct S {
    char prefix[32];
    union {
        char text[16];
        char* heap;
    } name;
    unsigned length;
    unsigned capacity;
    void report0(int, std::istringstream*, int, const char*, const char*);
    void report1(int, std::istringstream*, int, const char*, const char*);
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
    std::istringstream stream(std::ios_base::in);
    try {
        if (assertionHook == 0)
            report0(0, &stream, 0, text, message);
        else if (assertionHook == 1)
            report1(0, &stream, 0, text, message);
    }
    catch (...) {
        if (assertionHook == 0)
            report0(0, &stream, 0, text, message);
        else if (assertionHook == 1)
            report1(0, &stream, 0, text, message);
    }
}
