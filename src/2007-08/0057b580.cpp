// from server: 21% by colin
// roc 2007-08 0057b580  unit: RBX::RootInstance  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b580
//
// 0057b580  55                   push ebp
// 0057b581  8bec                 mov ebp, esp
// 0057b583  6aff                 push -1
// 0057b585  6811567500           push 0x755611
// 0057b58a  64a100000000         mov eax, dword ptr fs:[0]
// 0057b590  50                   push eax
// 0057b591  64892500000000       mov dword ptr fs:[0], esp
// 0057b598  83ec2c               sub esp, 0x2c
// 0057b59b  53                   push ebx
// 0057b59c  56                   push esi
// 0057b59d  33c0                 xor eax, eax
// 0057b59f  3bc8                 cmp ecx, eax
// 0057b5a1  57                   push edi
// 0057b5a2  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057b5a5  8945fc               mov dword ptr [ebp - 4], eax
// 0057b5a8  7406                 je 0x57b5b0
// 0057b5aa  8d8114fdffff         lea eax, [ecx - 0x2ec]
// 0057b5b0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057b5b3  8b7508               mov esi, dword ptr [ebp + 8]
// 0057b5b6  8b11                 mov edx, dword ptr [ecx]
// 0057b5b8  56                   push esi
// 0057b5b9  50                   push eax
// 0057b5ba  8b02                 mov eax, dword ptr [edx]
// 0057b5bc  ffd0                 call eax

struct RootInstance {
    char pad[0x2ec];
    void insertInstances(int, int);
};

void RootInstance::insertInstances(int a, int b) {
    RootInstance* self = this;
    if (self != 0) {
        self = (RootInstance*)((char*)self - 0x2ec);
    }
    int* p = (int*)b;
    int* vtbl = (int*)*p;
    void (*fn)(RootInstance*, int) = (void (*)(RootInstance*, int))vtbl[0];
    fn(self, a);
}
