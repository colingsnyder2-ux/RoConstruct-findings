// from server: 100% by king_originala
// roc 2008-06 00557d60  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557d60
//
// 00557d60  55                   push ebp
// 00557d61  8bec                 mov ebp, esp
// 00557d63  6aff                 push -1
// 00557d65  6831e27c00           push 0x7ce231
// 00557d6a  64a100000000         mov eax, dword ptr fs:[0]
// 00557d70  50                   push eax
// 00557d71  64892500000000       mov dword ptr fs:[0], esp
// 00557d78  83ec2c               sub esp, 0x2c
// 00557d7b  53                   push ebx
// 00557d7c  56                   push esi
// 00557d7d  33d2                 xor edx, edx
// 00557d7f  57                   push edi
// 00557d80  8965f0               mov dword ptr [ebp - 0x10], esp
// 00557d83  8955fc               mov dword ptr [ebp - 4], edx
// 00557d86  3bca                 cmp ecx, edx
// 00557d88  7406                 je 0x557d90
// 00557d8a  8d915cffffff         lea edx, [ecx - 0xa4]
// 00557d90  8b7d08               mov edi, dword ptr [ebp + 8]
// 00557d93  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00557d96  8b31                 mov esi, dword ptr [ecx]
// 00557d98  83ec0c               sub esp, 0xc
// 00557d9b  8bc4                 mov eax, esp
// 00557d9d  8938                 mov dword ptr [eax], edi
// 00557d9f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00557da2  897804               mov dword ptr [eax + 4], edi
// 00557da5  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00557da8  897808               mov dword ptr [eax + 8], edi
// 00557dab  8b06                 mov eax, dword ptr [esi]
// 00557dad  52                   push edx
// 00557dae  ffd0                 call eax
// 00557db0  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00557db3  5f                   pop edi
// 00557db4  5e                   pop esi
// 00557db5  64890d00000000       mov dword ptr fs:[0], ecx
// 00557dbc  5b                   pop ebx
// 00557dbd  8be5                 mov esp, ebp
// 00557dbf  5d                   pop ebp
// 00557dc0  c21000               ret 0x10
// 00557dc3  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00557dc6  8b11                 mov edx, dword ptr [ecx]
// 00557dc8  8b4204               mov eax, dword ptr [edx + 4]
// 00557dcb  ffd0                 call eax
// 00557dcd  50                   push eax
// 00557dce  8d4dc8               lea ecx, [ebp - 0x38]
// 00557dd1  ff1558248000         call dword ptr [0x802458]
// 00557dd7  8d4de4               lea ecx, [ebp - 0x1c]
// 00557dda  bb02000000           mov ebx, 2
// 00557ddf  51                   push ecx
// 00557de0  885dfc               mov byte ptr [ebp - 4], bl
// 00557de3  e838180100           call 0x569620
// 00557de8  83c404               add esp, 4
// 00557deb  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 00557def  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00557df2  c645fc03             mov byte ptr [ebp - 4], 3
// 00557df6  7303                 jae 0x557dfb
// 00557df8  8d4dcc               lea ecx, [ebp - 0x34]
// 00557dfb  8b00                 mov eax, dword ptr [eax]
// 00557dfd  51                   push ecx
// 00557dfe  68c4b98000           push 0x80b9c4
// 00557e03  53                   push ebx
// 00557e04  50                   push eax
// 00557e05  e896150100           call 0x5693a0
// 00557e0a  83c410               add esp, 0x10
// 00557e0d  8d4de4               lea ecx, [ebp - 0x1c]
// 00557e10  885dfc               mov byte ptr [ebp - 4], bl
// 00557e13  e848880a00           call 0x600660
// 00557e18  8d4dc8               lea ecx, [ebp - 0x38]
// 00557e1b  c645fc01             mov byte ptr [ebp - 4], 1
// 00557e1f  ff1568248000         call dword ptr [0x802468]
// 00557e25  b8b07d5500           mov eax, 0x557db0
// 00557e2a  c3                   ret 

struct Value {
    unsigned long x;
    unsigned long y;
    unsigned long z;
};

struct Object;

struct Callback {
    virtual void invoke(Object* object, Value value) = 0;
};

struct S {
    unsigned char member;
    void f(Value value, Callback& callback);
};

struct Padding {
    unsigned char data[164];
};

struct Object : Padding, S {
};

struct Failure {
    unsigned char data[40];
};

void S::f(Value value, Callback& callback)
{
    try {
        Object* object = static_cast<Object*>(this);
        callback.invoke(object, value);
    }
    catch (volatile Failure failure) {
        failure.data[0] = 0;
    }
    __assume(0);
}
