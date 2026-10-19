// from server: 95% by colin
// from server: 94% by king_originala
// roc 2008-06 004a5dd0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5dd0
//
// 004a5dd0  d9ee                 fldz 
// 004a5dd2  56                   push esi
// 004a5dd3  d85c2408             fcomp dword ptr [esp + 8]
// 004a5dd7  8bf1                 mov esi, ecx
// 004a5dd9  dfe0                 fnstsw ax
// 004a5ddb  f6c441               test ah, 0x41
// 004a5dde  7507                 jne 0x4a5de7
// 004a5de0  e87bf7ffff           call 0x4a5560
// 004a5de5  eb05                 jmp 0x4a5dec
// 004a5de7  e854f7ffff           call 0x4a5540
// 004a5dec  d9ee                 fldz 
// 004a5dee  8bce                 mov ecx, esi
// 004a5df0  d85c240c             fcomp dword ptr [esp + 0xc]
// 004a5df4  dfe0                 fnstsw ax
// 004a5df6  f6c441               test ah, 0x41
// 004a5df9  7507                 jne 0x4a5e02
// 004a5dfb  e860f7ffff           call 0x4a5560
// 004a5e00  eb05                 jmp 0x4a5e07
// 004a5e02  e839f7ffff           call 0x4a5540
// 004a5e07  d9ee                 fldz 
// 004a5e09  8bce                 mov ecx, esi
// 004a5e0b  d85c2410             fcomp dword ptr [esp + 0x10]
// 004a5e0f  dfe0                 fnstsw ax
// 004a5e11  f6c441               test ah, 0x41
// 004a5e14  7507                 jne 0x4a5e1d
// 004a5e16  e845f7ffff           call 0x4a5560
// 004a5e1b  eb05                 jmp 0x4a5e22
// 004a5e1d  e81ef7ffff           call 0x4a5540
// 004a5e22  d9ee                 fldz 
// 004a5e24  8bce                 mov ecx, esi
// 004a5e26  d85c2414             fcomp dword ptr [esp + 0x14]
// 004a5e2a  dfe0                 fnstsw ax
// 004a5e2c  f6c441               test ah, 0x41
// 004a5e2f  7507                 jne 0x4a5e38
// 004a5e31  e82af7ffff           call 0x4a5560
// 004a5e36  eb05                 jmp 0x4a5e3d
// 004a5e38  e803f7ffff           call 0x4a5540
// 004a5e3d  d944240c             fld dword ptr [esp + 0xc]
// 004a5e41  6a01                 push 1
// 004a5e43  d97c2410             fnstcw word ptr [esp + 0x10]
// 004a5e47  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004a5e4c  0d000c0000           or eax, 0xc00
// 004a5e51  d9e1                 fabs 
// 004a5e53  dc0d40e78100         fmul qword ptr [0x81e740]
// 004a5e59  8944240c             mov dword ptr [esp + 0xc], eax
// 004a5e5d  6a10                 push 0x10
// 004a5e5f  8d542414             lea edx, [esp + 0x14]
// 004a5e63  d96c2410             fldcw word ptr [esp + 0x10]
// 004a5e67  52                   push edx
// 004a5e68  db5c2414             fistp dword ptr [esp + 0x14]
// 004a5e6c  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 004a5e71  0fb7c8               movzx ecx, ax
// 004a5e74  d96c2418             fldcw word ptr [esp + 0x18]
// 004a5e78  894c2418             mov dword ptr [esp + 0x18], ecx
// 004a5e7c  8bce                 mov ecx, esi
// 004a5e7e  e87df7ffff           call 0x4a5600
// 004a5e83  6a01                 push 1
// 004a5e85  6a10                 push 0x10
// 004a5e87  8d542414             lea edx, [esp + 0x14]
// 004a5e8b  d9442418             fld dword ptr [esp + 0x18]
// 004a5e8f  52                   push edx
// 004a5e90  d97c2418             fnstcw word ptr [esp + 0x18]
// 004a5e94  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 004a5e99  d9e1                 fabs 
// 004a5e9b  dc0d40e78100         fmul qword ptr [0x81e740]
// 004a5ea1  0d000c0000           or eax, 0xc00
// 004a5ea6  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a5eaa  d96c241c             fldcw word ptr [esp + 0x1c]
// 004a5eae  db5c241c             fistp dword ptr [esp + 0x1c]
// 004a5eb2  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 004a5eb7  0fb7c8               movzx ecx, ax
// 004a5eba  d96c2418             fldcw word ptr [esp + 0x18]
// 004a5ebe  894c2418             mov dword ptr [esp + 0x18], ecx
// 004a5ec2  8bce                 mov ecx, esi
// 004a5ec4  e837f7ffff           call 0x4a5600
// 004a5ec9  6a01                 push 1
// 004a5ecb  6a10                 push 0x10
// 004a5ecd  8d542414             lea edx, [esp + 0x14]
// 004a5ed1  d944241c             fld dword ptr [esp + 0x1c]
// 004a5ed5  52                   push edx
// 004a5ed6  d97c2418             fnstcw word ptr [esp + 0x18]
// 004a5eda  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 004a5edf  d9e1                 fabs 
// 004a5ee1  dc0d40e78100         fmul qword ptr [0x81e740]
// 004a5ee7  0d000c0000           or eax, 0xc00
// 004a5eec  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a5ef0  d96c241c             fldcw word ptr [esp + 0x1c]
// 004a5ef4  db5c241c             fistp dword ptr [esp + 0x1c]
// 004a5ef8  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 004a5efd  0fb7c8               movzx ecx, ax
// 004a5f00  d96c2418             fldcw word ptr [esp + 0x18]
// 004a5f04  894c2418             mov dword ptr [esp + 0x18], ecx
// 004a5f08  8bce                 mov ecx, esi
// 004a5f0a  e8f1f6ffff           call 0x4a5600
// 004a5f0f  5e                   pop esi
// 004a5f10  c21000               ret 0x10
#include <intrin.h>

extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

struct S {
    void Write0();
    void Write1();
    void WriteBits(const unsigned char*, int, bool);
    void WriteNormQuat(float w, float x, float y, float z);
};

void S::WriteNormQuat(float w, float x, float y, float z)
{
    if (w < 0.0f)
        Write1();
    else
        Write0();

    if (x < 0.0f)
        Write1();
    else
        Write0();

    if (y < 0.0f)
        Write1();
    else
        Write0();

    if (z < 0.0f)
        Write1();
    else
        Write0();

    unsigned short value = (unsigned short)(fabs(x) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);
    _ReadWriteBarrier();

    value = (unsigned short)(fabs(y) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);

    value = (unsigned short)(fabs(z) * 65535.0);
    WriteBits((const unsigned char*)&value, 16, true);
}
