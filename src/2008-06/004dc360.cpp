// from server: 68% by colin
// roc 2008-06 004dc360  unit: RBX::ViewNew::ViewG3D  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc360
//
// 004dc360  d901                 fld dword ptr [ecx]
// 004dc362  d81a                 fcomp dword ptr [edx]
// 004dc364  dfe0                 fnstsw ax
// 004dc366  f6c441               test ah, 0x41
// 004dc369  7506                 jne 0x4dc371
// 004dc36b  b8ffffffff           mov eax, 0xffffffff
// 004dc370  c3                   ret 
// 004dc371  d901                 fld dword ptr [ecx]
// 004dc373  d81a                 fcomp dword ptr [edx]
// 004dc375  dfe0                 fnstsw ax
// 004dc377  f6c405               test ah, 5
// 004dc37a  7a06                 jp 0x4dc382
// 004dc37c  b801000000           mov eax, 1
// 004dc381  c3                   ret 
// 004dc382  d94104               fld dword ptr [ecx + 4]
// 004dc385  d85a04               fcomp dword ptr [edx + 4]
// 004dc388  dfe0                 fnstsw ax
// 004dc38a  f6c441               test ah, 0x41
// 004dc38d  74dc                 je 0x4dc36b
// 004dc38f  d94104               fld dword ptr [ecx + 4]
// 004dc392  d85a04               fcomp dword ptr [edx + 4]
// 004dc395  dfe0                 fnstsw ax
// 004dc397  f6c405               test ah, 5
// 004dc39a  7be0                 jnp 0x4dc37c
// 004dc39c  d94108               fld dword ptr [ecx + 8]
// 004dc39f  d85a08               fcomp dword ptr [edx + 8]
// 004dc3a2  dfe0                 fnstsw ax
// 004dc3a4  f6c441               test ah, 0x41
// 004dc3a7  74c2                 je 0x4dc36b
// 004dc3a9  d94108               fld dword ptr [ecx + 8]
// 004dc3ac  d85a08               fcomp dword ptr [edx + 8]
// 004dc3af  dfe0                 fnstsw ax
// 004dc3b1  f6c405               test ah, 5
// 004dc3b4  7bc6                 jnp 0x4dc37c
// 004dc3b6  33c0                 xor eax, eax
// 004dc3b8  c3                   ret 

struct ViewG3D {
    float x;
    float y;
    float z;
    int compare(const ViewG3D& other) const;
};

int ViewG3D::compare(const ViewG3D& other) const {
    if (x < other.x) return -1;
    if (x > other.x) return 1;
    if (y < other.y) return -1;
    if (y > other.y) return 1;
    if (z < other.z) return -1;
    if (z > other.z) return 1;
    return 0;
}
