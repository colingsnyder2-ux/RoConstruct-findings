// roc 2008-06 006c0550  unit: CXTPImageManagerIcon  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0550
//
// 006c0550  56                   push esi
// 006c0551  57                   push edi
// 006c0552  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c0556  57                   push edi
// 006c0557  8bf1                 mov esi, ecx
// 006c0559  e8e2d8ffff           call 0x6bde40
// 006c055e  85c0                 test eax, eax
// 006c0560  7413                 je 0x6c0575
// 006c0562  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c0566  6a01                 push 1
// 006c0568  51                   push ecx
// 006c0569  8bc8                 mov ecx, eax
// 006c056b  e8e0d7ffff           call 0x6bdd50
// 006c0570  5f                   pop edi
// 006c0571  5e                   pop esi
// 006c0572  c20800               ret 8
// 006c0575  57                   push edi
// 006c0576  8bce                 mov ecx, esi
// 006c0578  e8c3cdffff           call 0x6bd340
// 006c057d  85c0                 test eax, eax
// 006c057f  740d                 je 0x6c058e
// 006c0581  57                   push edi
// 006c0582  8bc8                 mov ecx, eax
// 006c0584  e887deffff           call 0x6be410
// 006c0589  5f                   pop edi
// 006c058a  5e                   pop esi
// 006c058b  c20800               ret 8
// 006c058e  5f                   pop edi
// 006c058f  33c0                 xor eax, eax
// 006c0591  5e                   pop esi
// 006c0592  c20800               ret 8
// copied from an identical function in another client (function ?setImage@CXTPImageManager@ns_ROCX000037@ns_ROCX00003a@@QAEPAXHH@Z)

namespace ns_ROCX000037 {
namespace ns_ROCX000029 {
struct CXTPImageManagerIcon {
    int sub_6496B0(int, int, int, int, int);
    int func(int, int, int, int);
};

extern "C" int __stdcall sub_630478(int, int);

int CXTPImageManagerIcon::func(int a, int b, int c, int d) {
    int result;
    if (d != 0) {
        result = sub_630478(a, 0xe);
        if (result != 0) {
            return sub_6496B0(result, a, b, c, 1);
        }
    }
    result = sub_630478(a, 3);
    if (result != 0) {
        return sub_6496B0(result, a, b, c, 0);
    }
    return 0;
}
}
}
