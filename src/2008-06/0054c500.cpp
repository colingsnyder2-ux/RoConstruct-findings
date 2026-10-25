// from server: 100% by king_originala
// roc 2008-06 0054c500  unit: RBX::RenderBase::Mesh  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c500
//
// 0054c500  55                   push ebp
// 0054c501  8bec                 mov ebp, esp
// 0054c503  51                   push ecx
// 0054c504  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c507  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c50a  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0054c511  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c514  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 0054c51b  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c51e  c7421400000000       mov dword ptr [edx + 0x14], 0
// 0054c525  837d0800             cmp dword ptr [ebp + 8], 0
// 0054c529  7506                 jne 0x54c531
// 0054c52b  32c0                 xor al, al
// 0054c52d  eb4b                 jmp 0x54c57a
// 0054c52f  eb47                 jmp 0x54c578
// 0054c531  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c534  e8c7fef8ff           call 0x4dc400
// 0054c539  3b4508               cmp eax, dword ptr [ebp + 8]
// 0054c53c  7307                 jae 0x54c545
// 0054c53e  e8fda7f7ff           call 0x4c6d40
// 0054c543  eb33                 jmp 0x54c578
// 0054c545  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c548  50                   push eax
// 0054c549  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c54c  83c108               add ecx, 8
// 0054c54f  e8ecfff8ff           call 0x4dc540
// 0054c554  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c557  89410c               mov dword ptr [ecx + 0xc], eax
// 0054c55a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c55d  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c560  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0054c563  894a10               mov dword ptr [edx + 0x10], ecx
// 0054c566  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c569  8b420c               mov eax, dword ptr [edx + 0xc]
// 0054c56c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054c56f  8d1448               lea edx, [eax + ecx*2]
// 0054c572  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c575  895014               mov dword ptr [eax + 0x14], edx
// 0054c578  b001                 mov al, 1
// 0054c57a  8be5                 mov esp, ebp
// 0054c57c  5d                   pop ebp
// 0054c57d  c20400               ret 4

extern "C" void __cdecl func_004c6d40();

struct Allocator {
    unsigned int storage;
    unsigned short *allocate(unsigned int count);
};

struct Mesh {
    unsigned int reserved[2];
    Allocator allocator;
    unsigned short *begin;
    unsigned short *end;
    unsigned short *limit;

    unsigned int func_004dc400();
    bool f(unsigned int count);
};

#pragma optimize("", off)
bool Mesh::f(unsigned int count)
{
    begin = 0;
    end = 0;
    limit = 0;

    if (count == 0) {
        return false;
    } else if (func_004dc400() < count) {
        func_004c6d40();
    } else {
        begin = allocator.allocate(count);
        end = begin;
        limit = begin + count;
    }

    return true;
}
#pragma optimize("", on)
