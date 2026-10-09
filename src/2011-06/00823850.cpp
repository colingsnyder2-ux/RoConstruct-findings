// roc 2011-06 00823850  unit: CXTPImageManagerIconSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00823850
//
// 00823850  837c241000           cmp dword ptr [esp + 0x10], 0
// 00823855  56                   push esi
// 00823856  8b742408             mov esi, dword ptr [esp + 8]
// 0082385a  57                   push edi
// 0082385b  8bf9                 mov edi, ecx
// 0082385d  7426                 je 0x823885
// 0082385f  6a0e                 push 0xe
// 00823861  56                   push esi
// 00823862  e87571feff           call 0x80a9dc
// 00823867  85c0                 test eax, eax
// 00823869  741a                 je 0x823885
// 0082386b  6a01                 push 1
// 0082386d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00823871  8b542414             mov edx, dword ptr [esp + 0x14]
// 00823875  51                   push ecx
// 00823876  52                   push edx
// 00823877  56                   push esi
// 00823878  50                   push eax
// 00823879  8bcf                 mov ecx, edi
// 0082387b  e8f0f5ffff           call 0x822e70
// 00823880  5f                   pop edi
// 00823881  5e                   pop esi
// 00823882  c21000               ret 0x10
// 00823885  6a03                 push 3
// 00823887  56                   push esi
// 00823888  e84f71feff           call 0x80a9dc
// 0082388d  85c0                 test eax, eax
// 0082388f  7404                 je 0x823895
// 00823891  6a00                 push 0
// 00823893  ebd8                 jmp 0x82386d
// 00823895  5f                   pop edi
// 00823896  33c0                 xor eax, eax
// 00823898  5e                   pop esi
// 00823899  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000029@ns_ROCX000028@@QAEHHHHH@Z)

namespace ns_ROCX000029 {
namespace ns_ROCX000005 {
struct CXTPImageManagerIcon {
    char pad[0x30];
    int sub_64b2c0(int);
    int set(int);
};

int CXTPImageManagerIcon::set(int value) {
    ((CXTPImageManagerIcon*)((char*)this + 0x30))->sub_64b2c0(value);
    return value;
}
}
}
