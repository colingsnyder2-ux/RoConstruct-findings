// from server: 57% by colin
// roc 2007-08 00719400  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719400
//
// 00719400  56                   push esi
// 00719401  8bf1                 mov esi, ecx
// 00719403  8b8e4c020000         mov ecx, dword ptr [esi + 0x24c]
// 00719409  57                   push edi
// 0071940a  e8d1e5f8ff           call 0x6a79e0
// 0071940f  8b8e48020000         mov ecx, dword ptr [esi + 0x248]
// 00719415  8b10                 mov edx, dword ptr [eax]
// 00719417  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071941b  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 00719421  56                   push esi
// 00719422  51                   push ecx
// 00719423  57                   push edi
// 00719424  8bc8                 mov ecx, eax
// 00719426  ffd2                 call edx
// 00719428  8b8e48020000         mov ecx, dword ptr [esi + 0x248]
// 0071942e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00719432  8b11                 mov edx, dword ptr [ecx]
// 00719434  83ec10               sub esp, 0x10
// 00719437  8bc4                 mov eax, esp
// 00719439  8930                 mov dword ptr [eax], esi
// 0071943b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0071943f  897004               mov dword ptr [eax + 4], esi
// 00719442  8b742428             mov esi, dword ptr [esp + 0x28]
// 00719446  897008               mov dword ptr [eax + 8], esi
// 00719449  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0071944d  89700c               mov dword ptr [eax + 0xc], esi
// 00719450  8b4260               mov eax, dword ptr [edx + 0x60]
// 00719453  57                   push edi
// 00719454  ffd0                 call eax
// 00719456  5f                   pop edi
// 00719457  5e                   pop esi
// 00719458  c21400               ret 0x14

struct CXTPRibbonGroupPopupToolBar {
    void func_00719400(int, int, int, int, int);
};

struct Inner {
    virtual void vfunc_148(int, int, int);
    virtual void vfunc_60(int, int, int, int, int);
};

extern "C" Inner* __fastcall sub_006a79e0(void*);

void CXTPRibbonGroupPopupToolBar::func_00719400(int a1, int a2, int a3, int a4, int a5)
{
    Inner* p = sub_006a79e0(*(void**)((char*)this + 0x24c));
    void** vtbl = *(void***)p;
    void (__fastcall *fn)(Inner*, int, int, int) = (void (__fastcall *)(Inner*, int, int, int))vtbl[0x148 / 4];
    fn(p, *(int*)((char*)this + 0x248), a1, (int)this);

    Inner* q = *(Inner**)((char*)this + 0x248);
    void** vtbl2 = *(void***)q;
    void (__fastcall *fn2)(Inner*, int, int, int, int, int) = (void (__fastcall *)(Inner*, int, int, int, int, int))vtbl2[0x60 / 4];
    fn2(q, a2, a3, a4, a5, a1);
}
