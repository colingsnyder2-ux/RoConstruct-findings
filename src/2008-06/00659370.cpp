// from server: 100% by king_originala
// roc 2008-06 00659370  unit: RBX::BallBallContact  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659370
//
// 00659370  83ec0c               sub esp, 0xc
// 00659373  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00659377  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065937b  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0065937f  8b500c               mov edx, dword ptr [eax + 0xc]
// 00659382  53                   push ebx
// 00659383  8b18                 mov ebx, dword ptr [eax]
// 00659385  55                   push ebp
// 00659386  8b6804               mov ebp, dword ptr [eax + 4]
// 00659389  56                   push esi
// 0065938a  8b7010               mov esi, dword ptr [eax + 0x10]
// 0065938d  57                   push edi
// 0065938e  8b7814               mov edi, dword ptr [eax + 0x14]
// 00659391  8b4008               mov eax, dword ptr [eax + 8]
// 00659394  d3fe                 sar esi, cl
// 00659396  d3ff                 sar edi, cl
// 00659398  d3fb                 sar ebx, cl
// 0065939a  d3fd                 sar ebp, cl
// 0065939c  d3fa                 sar edx, cl
// 0065939e  d3f8                 sar eax, cl
// 006593a0  89442418             mov dword ptr [esp + 0x18], eax
// 006593a4  8b442420             mov eax, dword ptr [esp + 0x20]
// 006593a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006593ac  89500c               mov dword ptr [eax + 0xc], edx
// 006593af  897010               mov dword ptr [eax + 0x10], esi
// 006593b2  897814               mov dword ptr [eax + 0x14], edi
// 006593b5  5f                   pop edi
// 006593b6  8918                 mov dword ptr [eax], ebx
// 006593b8  5e                   pop esi
// 006593b9  896804               mov dword ptr [eax + 4], ebp
// 006593bc  5d                   pop ebp
// 006593bd  894808               mov dword ptr [eax + 8], ecx
// 006593c0  5b                   pop ebx
// 006593c1  83c40c               add esp, 0xc
// 006593c4  c3                   ret 

struct Vector3i {
    int x, y, z;
};

struct Bounds {
    Vector3i first;
    Vector3i second;
};

Bounds __cdecl shiftBounds(int from, int to, const Bounds& source)
{
    int shift = to - from;

    Vector3i second;
    second.x = source.second.x >> shift;
    second.y = source.second.y >> shift;
    second.z = source.second.z >> shift;

    Vector3i first;
    first.x = source.first.x >> shift;
    first.y = source.first.y >> shift;
    first.z = source.first.z >> shift;

    Bounds result;
    result.first = first;
    result.second = second;
    return result;
}
