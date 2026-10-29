// roc 2009-06 00562930  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00562930
//
// 00562930  d901                 fld dword ptr [ecx]
// 00562932  d81a                 fcomp dword ptr [edx]
// 00562934  dfe0                 fnstsw ax
// 00562936  f6c441               test ah, 0x41
// 00562939  7506                 jne 0x562941
// 0056293b  b8ffffffff           mov eax, 0xffffffff
// 00562940  c3                   ret 
// 00562941  d901                 fld dword ptr [ecx]
// 00562943  d81a                 fcomp dword ptr [edx]
// 00562945  dfe0                 fnstsw ax
// 00562947  f6c405               test ah, 5
// 0056294a  7a06                 jp 0x562952
// 0056294c  b801000000           mov eax, 1
// 00562951  c3                   ret 
// 00562952  d94104               fld dword ptr [ecx + 4]
// 00562955  d85a04               fcomp dword ptr [edx + 4]
// 00562958  dfe0                 fnstsw ax
// 0056295a  f6c441               test ah, 0x41
// 0056295d  74dc                 je 0x56293b
// 0056295f  d94104               fld dword ptr [ecx + 4]
// 00562962  d85a04               fcomp dword ptr [edx + 4]
// 00562965  dfe0                 fnstsw ax
// 00562967  f6c405               test ah, 5
// 0056296a  7be0                 jnp 0x56294c
// 0056296c  d94108               fld dword ptr [ecx + 8]
// 0056296f  d85a08               fcomp dword ptr [edx + 8]
// 00562972  dfe0                 fnstsw ax
// 00562974  f6c441               test ah, 0x41
// 00562977  74c2                 je 0x56293b
// 00562979  d94108               fld dword ptr [ecx + 8]
// 0056297c  d85a08               fcomp dword ptr [edx + 8]
// 0056297f  dfe0                 fnstsw ax
// 00562981  f6c405               test ah, 5
// 00562984  7bc6                 jnp 0x56294c
// 00562986  33c0                 xor eax, eax
// 00562988  c3                   ret 
// copied from an identical function in another client (function ?compare@@YIHABUViewG3D@@0@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct ViewG3D { float x, y, z; };
int __fastcall compare(const ViewG3D& a, const ViewG3D& b) {
    if (b.x < a.x) return -1;
    if (b.x > a.x) return 1;
    if (b.y < a.y) return -1;
    if (b.y > a.y) return 1;
    if (b.z < a.z) return -1;
    if (b.z > a.z) return 1;
    return 0;
}