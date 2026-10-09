// from server: 60% by colin
// roc 2007-08 006cb840  unit: CXTPReportPaintManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cb840
//
// 006cb840  53                   push ebx
// 006cb841  55                   push ebp
// 006cb842  56                   push esi
// 006cb843  8b742418             mov esi, dword ptr [esp + 0x18]
// 006cb847  830602               add dword ptr [esi], 2
// 006cb84a  57                   push edi
// 006cb84b  8bf9                 mov edi, ecx
// 006cb84d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cb851  8b01                 mov eax, dword ptr [ecx]
// 006cb853  8b5078               mov edx, dword ptr [eax + 0x78]
// 006cb856  8b1f                 mov ebx, dword ptr [edi]
// 006cb858  ffd2                 call edx
// 006cb85a  8b0e                 mov ecx, dword ptr [esi]
// 006cb85c  8b5604               mov edx, dword ptr [esi + 4]
// 006cb85f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006cb863  f7d8                 neg eax
// 006cb865  1bc0                 sbb eax, eax
// 006cb867  83c001               add eax, 1
// 006cb86a  50                   push eax
// 006cb86b  83ec10               sub esp, 0x10
// 006cb86e  8bc4                 mov eax, esp
// 006cb870  8908                 mov dword ptr [eax], ecx
// 006cb872  8b4e08               mov ecx, dword ptr [esi + 8]
// 006cb875  895004               mov dword ptr [eax + 4], edx
// 006cb878  8b560c               mov edx, dword ptr [esi + 0xc]
// 006cb87b  894808               mov dword ptr [eax + 8], ecx
// 006cb87e  89500c               mov dword ptr [eax + 0xc], edx
// 006cb881  8b83b0000000         mov eax, dword ptr [ebx + 0xb0]
// 006cb887  55                   push ebp
// 006cb888  8bcf                 mov ecx, edi
// 006cb88a  ffd0                 call eax
// 006cb88c  85c0                 test eax, eax
// 006cb88e  740b                 je 0x6cb89b
// 006cb890  85ed                 test ebp, ebp
// 006cb892  7407                 je 0x6cb89b
// 006cb894  8b0e                 mov ecx, dword ptr [esi]
// 006cb896  03c8                 add ecx, eax
// 006cb898  894e08               mov dword ptr [esi + 8], ecx
// 006cb89b  5f                   pop edi
// 006cb89c  5e                   pop esi
// 006cb89d  5d                   pop ebp
// 006cb89e  83c002               add eax, 2
// 006cb8a1  5b                   pop ebx
// 006cb8a2  c20c00               ret 0xc

struct CXTPReportPaintManager {
    int sub_6CB840(int* a, int b, int c);
};

int CXTPReportPaintManager::sub_6CB840(int* a, int b, int c)
{
    int* p = a;
    *p += 2;
    int v = (*(int (__thiscall **)(void))(*(int *)b + 0x78))();
    int flag = (v != 0) ? 1 : 0;
    int local[4];
    local[0] = p[0];
    local[1] = p[1];
    local[2] = p[2];
    local[3] = p[3];
    int r = (*(int (__thiscall **)(void *, int, int, int *))(*(int *)this + 0xb0))(this, c, flag, local);
    if (r != 0 && c != 0) {
        p[2] = p[0] + r;
    }
    return r + 2;
}
