// roc 2008-06 004e3570  unit: seg_004e0000  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e3570
//
// 004e3570  83ec0c               sub esp, 0xc
// 004e3573  53                   push ebx
// 004e3574  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e3578  56                   push esi
// 004e3579  57                   push edi
// 004e357a  6a08                 push 8
// 004e357c  8bcb                 mov ecx, ebx
// 004e357e  e84da2ffff           call 0x4dd7d0
// 004e3583  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e3587  6a24                 push 0x24
// 004e3589  8bce                 mov ecx, esi
// 004e358b  e8d09dffff           call 0x4dd360
// 004e3590  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e3594  d907                 fld dword ptr [edi]
// 004e3596  8d44240c             lea eax, [esp + 0xc]
// 004e359a  d9e0                 fchs 
// 004e359c  50                   push eax
// 004e359d  d95c2410             fstp dword ptr [esp + 0x10]
// 004e35a1  8bcb                 mov ecx, ebx
// 004e35a3  d94704               fld dword ptr [edi + 4]
// 004e35a6  d9e0                 fchs 
// 004e35a8  d95c2414             fstp dword ptr [esp + 0x14]
// 004e35ac  d94708               fld dword ptr [edi + 8]
// 004e35af  d9e0                 fchs 
// 004e35b1  d95c2418             fstp dword ptr [esp + 0x18]
// 004e35b5  e896acffff           call 0x4de250
// 004e35ba  d907                 fld dword ptr [edi]
// 004e35bc  8d4c240c             lea ecx, [esp + 0xc]
// 004e35c0  d9e0                 fchs 
// 004e35c2  51                   push ecx
// 004e35c3  d95c2410             fstp dword ptr [esp + 0x10]
// 004e35c7  8bcb                 mov ecx, ebx
// 004e35c9  d94704               fld dword ptr [edi + 4]
// 004e35cc  d9e0                 fchs 
// 004e35ce  d95c2414             fstp dword ptr [esp + 0x14]
// 004e35d2  d94708               fld dword ptr [edi + 8]
// 004e35d5  d95c2418             fstp dword ptr [esp + 0x18]
// 004e35d9  e872acffff           call 0x4de250
// 004e35de  d907                 fld dword ptr [edi]
// 004e35e0  8d54240c             lea edx, [esp + 0xc]
// 004e35e4  d9e0                 fchs 
// 004e35e6  52                   push edx
// 004e35e7  d95c2410             fstp dword ptr [esp + 0x10]
// 004e35eb  8bcb                 mov ecx, ebx
// 004e35ed  d94704               fld dword ptr [edi + 4]
// 004e35f0  d95c2414             fstp dword ptr [esp + 0x14]
// 004e35f4  d94708               fld dword ptr [edi + 8]
// 004e35f7  d9e0                 fchs 
// 004e35f9  d95c2418             fstp dword ptr [esp + 0x18]
// 004e35fd  e84eacffff           call 0x4de250
// 004e3602  d907                 fld dword ptr [edi]
// 004e3604  8d44240c             lea eax, [esp + 0xc]
// 004e3608  d9e0                 fchs 
// 004e360a  50                   push eax
// 004e360b  d95c2410             fstp dword ptr [esp + 0x10]
// 004e360f  8bcb                 mov ecx, ebx
// 004e3611  d94704               fld dword ptr [edi + 4]
// 004e3614  d95c2414             fstp dword ptr [esp + 0x14]
// 004e3618  d94708               fld dword ptr [edi + 8]
// 004e361b  d95c2418             fstp dword ptr [esp + 0x18]
// 004e361f  e82cacffff           call 0x4de250
// 004e3624  d907                 fld dword ptr [edi]
// 004e3626  8d4c240c             lea ecx, [esp + 0xc]
// 004e362a  d95c240c             fstp dword ptr [esp + 0xc]
// 004e362e  51                   push ecx
// 004e362f  d94704               fld dword ptr [edi + 4]
// 004e3632  8bcb                 mov ecx, ebx
// 004e3634  d9e0                 fchs 
// 004e3636  d95c2414             fstp dword ptr [esp + 0x14]
// 004e363a  d94708               fld dword ptr [edi + 8]
// 004e363d  d9e0                 fchs 
// 004e363f  d95c2418             fstp dword ptr [esp + 0x18]
// 004e3643  e808acffff           call 0x4de250
// 004e3648  d907                 fld dword ptr [edi]
// 004e364a  8d54240c             lea edx, [esp + 0xc]
// 004e364e  d95c240c             fstp dword ptr [esp + 0xc]
// 004e3652  52                   push edx
// 004e3653  d94704               fld dword ptr [edi + 4]
// 004e3656  d9e0                 fchs 
// 004e3658  d95c2414             fstp dword ptr [esp + 0x14]
// 004e365c  d94708               fld dword ptr [edi + 8]
// 004e365f  d95c2418             fstp dword ptr [esp + 0x18]
// 004e3663  8bcb                 mov ecx, ebx
// 004e3665  e8e6abffff           call 0x4de250
// 004e366a  d907                 fld dword ptr [edi]
// 004e366c  d95c240c             fstp dword ptr [esp + 0xc]
// 004e3670  8d44240c             lea eax, [esp + 0xc]
// 004e3674  d94704               fld dword ptr [edi + 4]
// 004e3677  50                   push eax
// 004e3678  d95c2414             fstp dword ptr [esp + 0x14]
// 004e367c  8bcb                 mov ecx, ebx
// 004e367e  d94708               fld dword ptr [edi + 8]
// 004e3681  d9e0                 fchs 
// 004e3683  d95c2418             fstp dword ptr [esp + 0x18]
// 004e3687  e8c4abffff           call 0x4de250
// 004e368c  d907                 fld dword ptr [edi]
// 004e368e  8d4c240c             lea ecx, [esp + 0xc]
// 004e3692  d95c240c             fstp dword ptr [esp + 0xc]
// 004e3696  51                   push ecx
// 004e3697  d94704               fld dword ptr [edi + 4]
// 004e369a  8bcb                 mov ecx, ebx
// 004e369c  d95c2414             fstp dword ptr [esp + 0x14]
// 004e36a0  d94708               fld dword ptr [edi + 8]
// 004e36a3  d95c2418             fstp dword ptr [esp + 0x18]
// 004e36a7  e8a4abffff           call 0x4de250
// 004e36ac  6a06                 push 6
// 004e36ae  6a05                 push 5
// 004e36b0  6a07                 push 7
// 004e36b2  bf04000000           mov edi, 4
// 004e36b7  e814abffff           call 0x4de1d0
// 004e36bc  6a03                 push 3
// 004e36be  6a00                 push 0
// 004e36c0  6a02                 push 2
// 004e36c2  bf01000000           mov edi, 1
// 004e36c7  e804abffff           call 0x4de1d0
// 004e36cc  6a03                 push 3
// 004e36ce  6a06                 push 6
// 004e36d0  6a07                 push 7
// 004e36d2  bf02000000           mov edi, 2
// 004e36d7  e8f4aaffff           call 0x4de1d0
// 004e36dc  6a05                 push 5
// 004e36de  6a00                 push 0
// 004e36e0  6a01                 push 1
// 004e36e2  bf04000000           mov edi, 4
// 004e36e7  e8e4aaffff           call 0x4de1d0
// 004e36ec  6a07                 push 7
// 004e36ee  6a01                 push 1
// 004e36f0  6a03                 push 3
// 004e36f2  bf05000000           mov edi, 5
// 004e36f7  e8d4aaffff           call 0x4de1d0
// 004e36fc  6a02                 push 2
// 004e36fe  6a04                 push 4
// 004e3700  6a06                 push 6
// 004e3702  33ff                 xor edi, edi
// 004e3704  e8c7aaffff           call 0x4de1d0
// 004e3709  83c448               add esp, 0x48
// 004e370c  5f                   pop edi
// 004e370d  5e                   pop esi
// 004e370e  5b                   pop ebx
// 004e370f  83c40c               add esp, 0xc
// 004e3712  c3                   ret 

#include <vector>

struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
};
extern "C" void __cdecl addFace(int, int, int);

void __cdecl buildCube(const Vector3* half, std::vector<Vector3>* vertices,
                       std::vector<short>* indices)
{
    vertices->reserve(8);
    indices->reserve(36);
    vertices->push_back(Vector3(-half->x, -half->y, -half->z));
    vertices->push_back(Vector3(-half->x, -half->y, half->z));
    vertices->push_back(Vector3(-half->x, half->y, -half->z));
    vertices->push_back(Vector3(-half->x, half->y, half->z));
    vertices->push_back(Vector3(half->x, -half->y, -half->z));
    vertices->push_back(Vector3(half->x, -half->y, half->z));
    vertices->push_back(Vector3(half->x, half->y, -half->z));
    vertices->push_back(Vector3(half->x, half->y, half->z));
    addFace(7, 5, 6);
    addFace(2, 0, 3);
    addFace(7, 6, 3);
    addFace(1, 0, 5);
    addFace(3, 1, 7);
    addFace(6, 4, 2);
}
