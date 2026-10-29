// roc 2009-06 006ae3b0  unit: RBX::KernelJoint  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ae3b0
//
// 006ae3b0  51                   push ecx
// 006ae3b1  8b0d40fca400         mov ecx, dword ptr [0xa4fc40]
// 006ae3b7  a13cfca400           mov eax, dword ptr [0xa4fc3c]
// 006ae3bc  03c1                 add eax, ecx
// 006ae3be  33c9                 xor ecx, ecx
// 006ae3c0  890424               mov dword ptr [esp], eax
// 006ae3c3  3bc1                 cmp eax, ecx
// 006ae3c5  7514                 jne 0x6ae3db
// 006ae3c7  d90594758b00         fld dword ptr [0x8b7594]
// 006ae3cd  890d3cfca400         mov dword ptr [0xa4fc3c], ecx
// 006ae3d3  890d40fca400         mov dword ptr [0xa4fc40], ecx
// 006ae3d9  59                   pop ecx
// 006ae3da  c3                   ret 
// 006ae3db  db053cfca400         fild dword ptr [0xa4fc3c]
// 006ae3e1  890d3cfca400         mov dword ptr [0xa4fc3c], ecx
// 006ae3e7  890d40fca400         mov dword ptr [0xa4fc40], ecx
// 006ae3ed  da3424               fidiv dword ptr [esp]
// 006ae3f0  59                   pop ecx
// 006ae3f1  c3                   ret 
// copied from an identical function in another client (function ?sub_606100@@YAMXZ)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern float g_81c3b8;
extern int g_97b878;
extern int g_97b87c;

float sub_606100()
{
    int sum = g_97b878 + g_97b87c;
    float r;
    if (sum == 0)
        r = g_81c3b8;
    else
        r = (float)g_97b878 / (float)sum;
    g_97b878 = 0;
    g_97b87c = 0;
    return r;
}