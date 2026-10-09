// from server: 85% by colin
// roc 2007-08 005bca00  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bca00
//
// 005bca00  b801000000           mov eax, 1
// 005bca05  84052c688c00         test byte ptr [0x8c682c], al
// 005bca0b  754c                 jne 0x5bca59
// 005bca0d  09052c688c00         or dword ptr [0x8c682c], eax
// 005bca13  e8c875f3ff           call 0x4f3fe0
// 005bca18  d900                 fld dword ptr [eax]
// 005bca1a  d91d14688c00         fstp dword ptr [0x8c6814]
// 005bca20  d94004               fld dword ptr [eax + 4]
// 005bca23  d91d18688c00         fstp dword ptr [0x8c6818]
// 005bca29  d94008               fld dword ptr [eax + 8]
// 005bca2c  d91d1c688c00         fstp dword ptr [0x8c681c]
// 005bca32  e8a975f3ff           call 0x4f3fe0
// 005bca37  d94004               fld dword ptr [eax + 4]
// 005bca3a  d9e0                 fchs 
// 005bca3c  d94008               fld dword ptr [eax + 8]
// 005bca3f  d9e0                 fchs 
// 005bca41  d900                 fld dword ptr [eax]
// 005bca43  d9e0                 fchs 
// 005bca45  d91d20688c00         fstp dword ptr [0x8c6820]
// 005bca4b  d9c9                 fxch st(1)
// 005bca4d  d91d24688c00         fstp dword ptr [0x8c6824]
// 005bca53  d91d28688c00         fstp dword ptr [0x8c6828]
// 005bca59  b814688c00           mov eax, 0x8c6814
// 005bca5e  c3                   ret 

extern "C" float* __cdecl func_004f3fe0();

float g_8c6814;
float g_8c6818;
float g_8c681c;
float g_8c6820;
float g_8c6824;
float g_8c6828;
unsigned int g_8c682c;

float* func_005bca00()
{
    if ((g_8c682c & 1) == 0) {
        g_8c682c |= 1;
        float* p = func_004f3fe0();
        g_8c6814 = p[0];
        g_8c6818 = p[1];
        g_8c681c = p[2];
        p = func_004f3fe0();
        g_8c6820 = -p[0];
        g_8c6824 = -p[1];
        g_8c6828 = -p[2];
    }
    return &g_8c6814;
}
