// from server: 83% by colin
// roc 2007-08 0043cfb0  unit: G3D::VVector3::?$XItem  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043cfb0
//
// 0043cfb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043cfb4  d901                 fld dword ptr [ecx]
// 0043cfb6  8b542408             mov edx, dword ptr [esp + 8]
// 0043cfba  d902                 fld dword ptr [edx]
// 0043cfbc  dae9                 fucompp 
// 0043cfbe  dfe0                 fnstsw ax
// 0043cfc0  f6c444               test ah, 0x44
// 0043cfc3  7a26                 jp 0x43cfeb
// 0043cfc5  d94104               fld dword ptr [ecx + 4]
// 0043cfc8  d94204               fld dword ptr [edx + 4]
// 0043cfcb  dae9                 fucompp 
// 0043cfcd  dfe0                 fnstsw ax
// 0043cfcf  f6c444               test ah, 0x44
// 0043cfd2  7a17                 jp 0x43cfeb
// 0043cfd4  d94108               fld dword ptr [ecx + 8]
// 0043cfd7  d94208               fld dword ptr [edx + 8]
// 0043cfda  dae9                 fucompp 
// 0043cfdc  dfe0                 fnstsw ax
// 0043cfde  f6c444               test ah, 0x44
// 0043cfe1  7a08                 jp 0x43cfeb
// 0043cfe3  b801000000           mov eax, 1
// 0043cfe8  c20800               ret 8
// 0043cfeb  33c0                 xor eax, eax
// 0043cfed  c20800               ret 8

struct VVector3 {
    float x;
    float y;
    float z;
};

bool __stdcall equalVectors(const VVector3* a, const VVector3* b)
{
    if (a->x == b->x)
        return false;
    if (a->y != b->y)
        return false;
    if (a->z != b->z)
        return false;
    return true;
}
