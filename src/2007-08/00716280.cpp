// from server: 80% by colin
// roc 2007-08 00716280  unit: CXTPRibbonTab  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716280
//
// 00716280  56                   push esi
// 00716281  57                   push edi
// 00716282  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00716286  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 0071628c  8bf1                 mov esi, ecx
// 0071628e  8d8f98000000         lea ecx, [edi + 0x98]
// 00716294  51                   push ecx
// 00716295  8d8e98000000         lea ecx, [esi + 0x98]
// 0071629b  898694000000         mov dword ptr [esi + 0x94], eax
// 007162a1  ff1534d47700         call dword ptr [0x77d434]
// 007162a7  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 007162ad  899690000000         mov dword ptr [esi + 0x90], edx
// 007162b3  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 007162b9  898688000000         mov dword ptr [esi + 0x88], eax
// 007162bf  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 007162c5  51                   push ecx
// 007162c6  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007162cc  e83f0d0000           call 0x717010
// 007162d1  5f                   pop edi
// 007162d2  5e                   pop esi
// 007162d3  c20400               ret 4

struct CXTPRibbonTab
{
    char pad0[0x84];
    int field84;
    int field88;
    int field8c;
    int field90;
    int field94;
    int field98;
    void CopyFrom(CXTPRibbonTab* other);
};

extern "C" int __stdcall sub_77D434(int*);
extern int __fastcall sub_717010(int, int);

void CXTPRibbonTab::CopyFrom(CXTPRibbonTab* other)
{
    field94 = other->field94;
    sub_77D434(&other->field98);
    field90 = other->field90;
    field88 = other->field88;
    sub_717010(field84, other->field84);
}
