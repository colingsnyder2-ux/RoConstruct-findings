// from server: 37% by colin
// roc 2007-08 004035e0  unit: ATL::CRegObject  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004035e0
//
// 004035e0  8b442404             mov eax, dword ptr [esp + 4]
// 004035e4  56                   push esi
// 004035e5  8bf1                 mov esi, ecx
// 004035e7  83c9ff               or ecx, 0xffffffff
// 004035ea  2bc8                 sub ecx, eax
// 004035ec  83f908               cmp ecx, 8
// 004035ef  7215                 jb 0x403606
// 004035f1  83c008               add eax, 8
// 004035f4  50                   push eax
// 004035f5  ff15d0e67700         call dword ptr [0x77e6d0]
// 004035fb  83c404               add esp, 4
// 004035fe  85c0                 test eax, eax
// 00403600  750e                 jne 0x403610
// 00403602  5e                   pop esi
// 00403603  c20400               ret 4
// 00403606  6857000780           push 0x80070057
// 0040360b  e8f0d9ffff           call 0x401000
// 00403610  8b16                 mov edx, dword ptr [esi]
// 00403612  8910                 mov dword ptr [eax], edx
// 00403614  8906                 mov dword ptr [esi], eax
// 00403616  83c008               add eax, 8
// 00403619  5e                   pop esi
// 0040361a  c20400               ret 4

struct CRegObject {
    void* field0;
    void AddToHead(void* p);
};

extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __stdcall ATL_ThrowInvalidArg(unsigned int hr);

void CRegObject::AddToHead(void* p) {
    unsigned int space = (unsigned int)(-1) - (unsigned int)p;
    if (space < 8) {
        ATL_ThrowInvalidArg(0x80070057);
    }
    void* mem = malloc((unsigned int)p + 8);
    if (mem == 0) {
        return;
    }
    *(void**)mem = field0;
    field0 = mem;
}
