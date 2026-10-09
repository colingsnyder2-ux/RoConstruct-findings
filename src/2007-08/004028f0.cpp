// from server: 57% by colin
// roc 2007-08 004028f0  unit: VCWorkspace::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004028f0
//
// 004028f0  56                   push esi
// 004028f1  8bf1                 mov esi, ecx
// 004028f3  c7064c4b7800         mov dword ptr [esi], 0x784b4c
// 004028f9  c74604344b7800       mov dword ptr [esi + 4], 0x784b34
// 00402900  c746081c4b7800       mov dword ptr [esi + 8], 0x784b1c
// 00402907  c7460cf84a7800       mov dword ptr [esi + 0xc], 0x784af8
// 0040290e  c74618e04a7800       mov dword ptr [esi + 0x18], 0x784ae0
// 00402915  c74620c44a7800       mov dword ptr [esi + 0x20], 0x784ac4
// 0040291c  c74628b84a7800       mov dword ptr [esi + 0x28], 0x784ab8
// 00402923  c7462cac4a7800       mov dword ptr [esi + 0x2c], 0x784aac
// 0040292a  c74630010000c0       mov dword ptr [esi + 0x30], 0xc0000001
// 00402931  e89a550600           call 0x467ed0
// 00402936  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0040293c  8b01                 mov eax, dword ptr [ecx]
// 0040293e  8b5008               mov edx, dword ptr [eax + 8]
// 00402941  ffd2                 call edx
// 00402943  8bce                 mov ecx, esi
// 00402945  5e                   pop esi
// 00402946  e975420600           jmp 0x466bc0

struct VCWorkspaceCComObject {
    void construct();
};

extern "C" void __cdecl func_00467ed0();
extern "C" void __cdecl func_00466bc0();

extern int g_8bae44;

void VCWorkspaceCComObject::construct()
{
    *(int*)((char*)this + 0x00) = 0x784b4c;
    *(int*)((char*)this + 0x04) = 0x784b34;
    *(int*)((char*)this + 0x08) = 0x784b1c;
    *(int*)((char*)this + 0x0c) = 0x784af8;
    *(int*)((char*)this + 0x18) = 0x784ae0;
    *(int*)((char*)this + 0x20) = 0x784ac4;
    *(int*)((char*)this + 0x28) = 0x784ab8;
    *(int*)((char*)this + 0x2c) = 0x784aac;
    *(int*)((char*)this + 0x30) = 0xc0000001;
    func_00467ed0();
    int* p = (int*)g_8bae44;
    int* vt = (int*)*p;
    void (__stdcall *fn)(int*) = (void (__stdcall *)(int*))vt[2];
    fn(p);
    func_00466bc0();
}
