// from server: 24% by colin
// roc 2007-08 0052d010  unit: RBX::VRunService::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d010
//
// 0052d010  55                   push ebp
// 0052d011  8bec                 mov ebp, esp
// 0052d013  6aff                 push -1
// 0052d015  6811037500           push 0x750311
// 0052d01a  64a100000000         mov eax, dword ptr fs:[0]
// 0052d020  50                   push eax
// 0052d021  64892500000000       mov dword ptr fs:[0], esp
// 0052d028  83ec24               sub esp, 0x24
// 0052d02b  53                   push ebx
// 0052d02c  56                   push esi
// 0052d02d  33c0                 xor eax, eax
// 0052d02f  3bc8                 cmp ecx, eax
// 0052d031  57                   push edi
// 0052d032  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052d035  8945fc               mov dword ptr [ebp - 4], eax
// 0052d038  7406                 je 0x52d040
// 0052d03a  8d8100ffffff         lea eax, [ecx - 0x100]
// 0052d040  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0052d043  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0052d046  8b11                 mov edx, dword ptr [ecx]
// 0052d048  56                   push esi
// 0052d049  8b7508               mov esi, dword ptr [ebp + 8]
// 0052d04c  56                   push esi
// 0052d04d  50                   push eax
// 0052d04e  8b02                 mov eax, dword ptr [edx]
// 0052d050  ffd0                 call eax

struct FactoryProduct {
    void construct(void* arg0, void* arg1, void* arg2);
};

void FactoryProduct::construct(void* arg0, void* arg1, void* arg2)
{
    void* self = this;
    if (self == 0) {
        self = (char*)self - 0x100;
    }
    void** vtbl = *(void***)arg2;
    typedef void (__thiscall *Fn)(void*, void*, void*, void*);
    Fn fn = (Fn)vtbl[0];
    fn(self, arg0, arg1, arg2);
}
