// from server: 25% by colin
// roc 2007-08 0052cf50  unit: RBX::VRunService::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cf50
//
// 0052cf50  55                   push ebp
// 0052cf51  8bec                 mov ebp, esp
// 0052cf53  6aff                 push -1
// 0052cf55  68f1027500           push 0x7502f1
// 0052cf5a  64a100000000         mov eax, dword ptr fs:[0]
// 0052cf60  50                   push eax
// 0052cf61  64892500000000       mov dword ptr fs:[0], esp
// 0052cf68  83ec24               sub esp, 0x24
// 0052cf6b  53                   push ebx
// 0052cf6c  56                   push esi
// 0052cf6d  33c0                 xor eax, eax
// 0052cf6f  3bc8                 cmp ecx, eax
// 0052cf71  57                   push edi
// 0052cf72  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052cf75  8945fc               mov dword ptr [ebp - 4], eax
// 0052cf78  7406                 je 0x52cf80
// 0052cf7a  8d8118ffffff         lea eax, [ecx - 0xe8]
// 0052cf80  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0052cf83  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0052cf86  8b11                 mov edx, dword ptr [ecx]
// 0052cf88  56                   push esi
// 0052cf89  8b7508               mov esi, dword ptr [ebp + 8]
// 0052cf8c  56                   push esi
// 0052cf8d  50                   push eax
// 0052cf8e  8b02                 mov eax, dword ptr [edx]
// 0052cf90  ffd0                 call eax

struct FactoryProduct {
    char pad[0xe8];
    void construct(void* a, void* b, void* c);
};

void FactoryProduct::construct(void* a, void* b, void* c)
{
    FactoryProduct* self = this;
    if (self != 0)
        self = (FactoryProduct*)((char*)self - 0xe8);
    void** vtbl = *(void***)c;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
    fn(self, a, b);
}
