// from server: 21% by colin
// roc 2007-08 0052d190  unit: RBX::VRunService::?$FactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d190
//
// 0052d190  55                   push ebp
// 0052d191  8bec                 mov ebp, esp
// 0052d193  6aff                 push -1
// 0052d195  6851037500           push 0x750351
// 0052d19a  64a100000000         mov eax, dword ptr fs:[0]
// 0052d1a0  50                   push eax
// 0052d1a1  64892500000000       mov dword ptr fs:[0], esp
// 0052d1a8  83ec2c               sub esp, 0x2c
// 0052d1ab  53                   push ebx
// 0052d1ac  56                   push esi
// 0052d1ad  33c0                 xor eax, eax
// 0052d1af  3bc8                 cmp ecx, eax
// 0052d1b1  57                   push edi
// 0052d1b2  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052d1b5  8945fc               mov dword ptr [ebp - 4], eax
// 0052d1b8  7406                 je 0x52d1c0
// 0052d1ba  8d81d0feffff         lea eax, [ecx - 0x130]
// 0052d1c0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0052d1c3  8b7508               mov esi, dword ptr [ebp + 8]
// 0052d1c6  8b11                 mov edx, dword ptr [ecx]
// 0052d1c8  56                   push esi
// 0052d1c9  50                   push eax
// 0052d1ca  8b02                 mov eax, dword ptr [edx]
// 0052d1cc  ffd0                 call eax

struct FactoryProduct {
    void construct(void* arg0, void* arg1);
};

void FactoryProduct::construct(void* arg0, void* arg1)
{
    FactoryProduct* self = this;
    if (self != 0)
        self = (FactoryProduct*)((char*)self - 0x130);

    void** vtbl = *(void***)arg1;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0];
    fn(self, arg0);
}
