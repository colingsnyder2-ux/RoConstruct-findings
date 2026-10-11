// from server: 31% by colin
// roc 2008-06 004f1eb0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 313 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1eb0
//
// 004f1eb0  51                   push ecx
// 004f1eb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f1eb5  d944240c             fld dword ptr [esp + 0xc]
// 004f1eb9  53                   push ebx
// 004f1eba  56                   push esi
// 004f1ebb  57                   push edi
// 004f1ebc  50                   push eax
// 004f1ebd  83ec0c               sub esp, 0xc
// 004f1ec0  8bc4                 mov eax, esp
// 004f1ec2  d918                 fstp dword ptr [eax]
// 004f1ec4  8bf1                 mov esi, ecx
// 004f1ec6  d944242c             fld dword ptr [esp + 0x2c]
// 004f1eca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f1ece  d95804               fstp dword ptr [eax + 4]
// 004f1ed1  8964241c             mov dword ptr [esp + 0x1c], esp
// 004f1ed5  d9442430             fld dword ptr [esp + 0x30]
// 004f1ed9  51                   push ecx
// 004f1eda  8bce                 mov ecx, esi
// 004f1edc  d95808               fstp dword ptr [eax + 8]
// 004f1edf  e89cee0000           call 0x500d80
// 004f1ee4  d9442418             fld dword ptr [esp + 0x18]
// 004f1ee8  d90568708200         fld dword ptr [0x827068]
// 004f1eee  c7064c708200         mov dword ptr [esi], 0x82704c
// 004f1ef4  dcc9                 fmul st(1), st(0)
// 004f1ef6  33d2                 xor edx, edx
// 004f1ef8  33c0                 xor eax, eax
// 004f1efa  d9c9                 fxch st(1)
// 004f1efc  33c9                 xor ecx, ecx
// 004f1efe  66895620             mov word ptr [esi + 0x20], dx
// 004f1f02  66894622             mov word ptr [esi + 0x22], ax
// 004f1f06  66894e24             mov word ptr [esi + 0x24], cx
// 004f1f0a  e8e1f81a00           call 0x6a17f0
// 004f1f0f  89442424             mov dword ptr [esp + 0x24], eax
// 004f1f13  83f801               cmp eax, 1
// 004f1f16  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004f1f1e  8d442424             lea eax, [esp + 0x24]
// 004f1f22  7f04                 jg 0x4f1f28
// 004f1f24  8d442414             lea eax, [esp + 0x14]
// 004f1f28  0fb738               movzx edi, word ptr [eax]
// 004f1f2b  d944241c             fld dword ptr [esp + 0x1c]
// 004f1f2f  d8c9                 fmul st(1)
// 004f1f31  66897e20             mov word ptr [esi + 0x20], di
// 004f1f35  e8b6f81a00           call 0x6a17f0
// 004f1f3a  89442424             mov dword ptr [esp + 0x24], eax
// 004f1f3e  83f801               cmp eax, 1
// 004f1f41  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004f1f49  8d442424             lea eax, [esp + 0x24]
// 004f1f4d  7f04                 jg 0x4f1f53
// 004f1f4f  8d442414             lea eax, [esp + 0x14]
// 004f1f53  0fb718               movzx ebx, word ptr [eax]
// 004f1f56  d84c2420             fmul dword ptr [esp + 0x20]
// 004f1f5a  66895e22             mov word ptr [esi + 0x22], bx
// 004f1f5e  e88df81a00           call 0x6a17f0
// 004f1f63  89442424             mov dword ptr [esp + 0x24], eax
// 004f1f67  83f801               cmp eax, 1
// 004f1f6a  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004f1f72  8d442424             lea eax, [esp + 0x24]
// 004f1f76  7f04                 jg 0x4f1f7c
// 004f1f78  8d442414             lea eax, [esp + 0x14]
// 004f1f7c  0fb700               movzx eax, word ptr [eax]
// 004f1f7f  0fbfcf               movsx ecx, di
// 004f1f82  ba04000000           mov edx, 4
// 004f1f87  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f1f8b  3bca                 cmp ecx, edx
// 004f1f8d  66894624             mov word ptr [esi + 0x24], ax
// 004f1f91  89542414             mov dword ptr [esp + 0x14], edx
// 004f1f95  8d4c2424             lea ecx, [esp + 0x24]
// 004f1f99  7c04                 jl 0x4f1f9f
// 004f1f9b  8d4c2414             lea ecx, [esp + 0x14]
// 004f1f9f  668b09               mov cx, word ptr [ecx]
// 004f1fa2  66894e20             mov word ptr [esi + 0x20], cx
// 004f1fa6  0fbfcb               movsx ecx, bx
// 004f1fa9  894c2424             mov dword ptr [esp + 0x24], ecx
// 004f1fad  3bca                 cmp ecx, edx
// 004f1faf  89542414             mov dword ptr [esp + 0x14], edx
// 004f1fb3  8d4c2424             lea ecx, [esp + 0x24]
// 004f1fb7  7c04                 jl 0x4f1fbd
// 004f1fb9  8d4c2414             lea ecx, [esp + 0x14]
// 004f1fbd  668b09               mov cx, word ptr [ecx]
// 004f1fc0  98                   cwde 
// 004f1fc1  89442424             mov dword ptr [esp + 0x24], eax
// 004f1fc5  3bc2                 cmp eax, edx
// 004f1fc7  66894e22             mov word ptr [esi + 0x22], cx
// 004f1fcb  89542414             mov dword ptr [esp + 0x14], edx
// 004f1fcf  8d442424             lea eax, [esp + 0x24]
// 004f1fd3  7c04                 jl 0x4f1fd9
// 004f1fd5  8d442414             lea eax, [esp + 0x14]
// 004f1fd9  668b10               mov dx, word ptr [eax]
// 004f1fdc  5f                   pop edi
// 004f1fdd  66895624             mov word ptr [esi + 0x24], dx
// 004f1fe1  8bc6                 mov eax, esi
// 004f1fe3  5e                   pop esi
// 004f1fe4  5b                   pop ebx
// 004f1fe5  59                   pop ecx
// 004f1fe6  c21400               ret 0x14

struct VMaterialBase {
    char pad[0x20];
    unsigned short a;
    unsigned short b;
    unsigned short c;
    VMaterialBase* init(float f1, float f2, float f3, float f4, float f5);
};

extern "C" void __stdcall sub_500d80();
extern "C" int __cdecl sub_6a17f0(float);

extern float g_827068;

VMaterialBase* VMaterialBase::init(float f1, float f2, float f3, float f4, float f5)
{
    sub_500d80();
    a = 0;
    b = 0;
    c = 0;
    *(void**)this = (void*)0x82704c;

    float v = f1 * g_827068;
    int r = sub_6a17f0(v);
    unsigned short s;
    if (r > 1) {
        s = *(unsigned short*)&r;
    } else {
        int one = 1;
        s = *(unsigned short*)&one;
    }
    a = s;

    float v2 = f2 * g_827068;
    r = sub_6a17f0(v2);
    unsigned short s2;
    if (r > 1) {
        s2 = *(unsigned short*)&r;
    } else {
        int one = 1;
        s2 = *(unsigned short*)&one;
    }
    b = s2;

    float v3 = f3 * g_827068;
    r = sub_6a17f0(v3);
    unsigned short s3;
    if (r > 1) {
        s3 = *(unsigned short*)&r;
    } else {
        int one = 1;
        s3 = *(unsigned short*)&one;
    }
    c = s3;

    int t;
    t = (int)(short)s;
    if (t < 4) {
        a = *(unsigned short*)&t;
    } else {
        int four = 4;
        a = *(unsigned short*)&four;
    }

    t = (int)(short)s2;
    if (t < 4) {
        b = *(unsigned short*)&t;
    } else {
        int four = 4;
        b = *(unsigned short*)&four;
    }

    t = (int)(short)s3;
    if (t < 4) {
        c = *(unsigned short*)&t;
    } else {
        int four = 4;
        c = *(unsigned short*)&four;
    }

    return this;
}
