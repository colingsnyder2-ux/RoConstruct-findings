// from server: 21% by colin
// roc 2007-08 00442c80  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442c80
//
// 00442c80  55                   push ebp
// 00442c81  8bec                 mov ebp, esp
// 00442c83  6aff                 push -1
// 00442c85  6891f37300           push 0x73f391
// 00442c8a  64a100000000         mov eax, dword ptr fs:[0]
// 00442c90  50                   push eax
// 00442c91  83ec34               sub esp, 0x34
// 00442c94  a188518b00           mov eax, dword ptr [0x8b5188]
// 00442c99  33c5                 xor eax, ebp
// 00442c9b  8945ec               mov dword ptr [ebp - 0x14], eax
// 00442c9e  53                   push ebx
// 00442c9f  56                   push esi
// 00442ca0  57                   push edi
// 00442ca1  50                   push eax
// 00442ca2  8d45f4               lea eax, [ebp - 0xc]
// 00442ca5  64a300000000         mov dword ptr fs:[0], eax
// 00442cab  8965f0               mov dword ptr [ebp - 0x10], esp
// 00442cae  8bc1                 mov eax, ecx
// 00442cb0  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00442cb3  33d2                 xor edx, edx
// 00442cb5  3bc2                 cmp eax, edx
// 00442cb7  8955fc               mov dword ptr [ebp - 4], edx
// 00442cba  7406                 je 0x442cc2
// 00442cbc  8d9074ffffff         lea edx, [eax - 0x8c]
// 00442cc2  8b7508               mov esi, dword ptr [ebp + 8]
// 00442cc5  83ec08               sub esp, 8
// 00442cc8  8bc4                 mov eax, esp
// 00442cca  8930                 mov dword ptr [eax], esi
// 00442ccc  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00442ccf  897004               mov dword ptr [eax + 4], esi
// 00442cd2  8b01                 mov eax, dword ptr [ecx]
// 00442cd4  8965c0               mov dword ptr [ebp - 0x40], esp
// 00442cd7  52                   push edx
// 00442cd8  8b10                 mov edx, dword ptr [eax]
// 00442cda  ffd2                 call edx

struct S_00442c80
{
    void f(int a, int b, int c);
};

void S_00442c80::f(int a, int b, int c)
{
    int* p = (int*)c;
    int* q = (int*)p[0];
    int* r = (int*)q[0];
    int local[2];
    local[0] = a;
    local[1] = b;
    ((void (__stdcall*)(int*, int*))r)(this ? (int*)((char*)this - 0x8c) : 0, local);
}
