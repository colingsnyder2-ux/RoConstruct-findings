// from server: 17% by colin
// roc 2007-08 00574e90  unit: RBX::PartInstance  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574e90
//
// 00574e90  55                   push ebp
// 00574e91  8bec                 mov ebp, esp
// 00574e93  6aff                 push -1
// 00574e95  68b1527500           push 0x7552b1
// 00574e9a  64a100000000         mov eax, dword ptr fs:[0]
// 00574ea0  50                   push eax
// 00574ea1  64892500000000       mov dword ptr fs:[0], esp
// 00574ea8  83ec30               sub esp, 0x30
// 00574eab  53                   push ebx
// 00574eac  56                   push esi
// 00574ead  33c0                 xor eax, eax
// 00574eaf  3bc8                 cmp ecx, eax
// 00574eb1  57                   push edi
// 00574eb2  8965f0               mov dword ptr [ebp - 0x10], esp
// 00574eb5  8945fc               mov dword ptr [ebp - 4], eax
// 00574eb8  7406                 je 0x574ec0
// 00574eba  8d81a8feffff         lea eax, [ecx - 0x158]
// 00574ec0  8a5508               mov dl, byte ptr [ebp + 8]
// 00574ec3  51                   push ecx
// 00574ec4  8bcc                 mov ecx, esp
// 00574ec6  8811                 mov byte ptr [ecx], dl
// 00574ec8  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00574ecb  8b11                 mov edx, dword ptr [ecx]
// 00574ecd  8965ec               mov dword ptr [ebp - 0x14], esp
// 00574ed0  50                   push eax
// 00574ed1  8b02                 mov eax, dword ptr [edx]
// 00574ed3  ffd0                 call eax

struct PartInstance {
    char pad[0x158];
    void func_00574e90(char, int);
};

void PartInstance::func_00574e90(char arg1, int arg2)
{
    PartInstance* self = this;
    if (self != 0)
        self = (PartInstance*)((char*)self - 0x158);
    int* p = (int*)arg2;
    int* vtbl = (int*)*p;
    void (*fn)(void*, char, int*) = (void (*)(void*, char, int*))vtbl[0];
    fn(self, arg1, p);
}
