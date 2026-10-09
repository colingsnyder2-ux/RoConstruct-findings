// from server: 61% by colin
// roc 2007-08 005b8080  unit: RBX::$01::?$SurfaceDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8080
//
// 005b8080  56                   push esi
// 005b8081  8bf1                 mov esi, ecx
// 005b8083  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 005b8089  85c9                 test ecx, ecx
// 005b808b  57                   push edi
// 005b808c  743a                 je 0x5b80c8
// 005b808e  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 005b8094  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b8098  2bc1                 sub eax, ecx
// 005b809a  c1f802               sar eax, 2
// 005b809d  3bf8                 cmp edi, eax
// 005b809f  7327                 jae 0x5b80c8
// 005b80a1  85c9                 test ecx, ecx
// 005b80a3  740f                 je 0x5b80b4
// 005b80a5  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 005b80ab  2bc1                 sub eax, ecx
// 005b80ad  c1f802               sar eax, 2
// 005b80b0  3bf8                 cmp edi, eax
// 005b80b2  7206                 jb 0x5b80ba
// 005b80b4  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b80ba  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005b80c0  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005b80c3  5f                   pop edi
// 005b80c4  5e                   pop esi
// 005b80c5  c20400               ret 4
// 005b80c8  5f                   pop edi
// 005b80c9  83c8ff               or eax, 0xffffffff
// 005b80cc  5e                   pop esi
// 005b80cd  c20400               ret 4

struct SurfaceDescriptor {
    char pad[0x8c];
    int* begin;
    int* end;
    int get(int index);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int SurfaceDescriptor::get(int index)
{
    int* b = begin;
    if (b != 0) {
        int count = (end - b) >> 2;
        if (index < count) {
            if (b != 0 || index >= (end - b) >> 2) {
                _invalid_parameter_noinfo();
            }
            return begin[index];
        }
    }
    return -1;
}
