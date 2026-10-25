// from server: 100% by king_originala
// roc 2008-06 00540710  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540710
//
// 00540710  55                   push ebp
// 00540711  8bec                 mov ebp, esp
// 00540713  51                   push ecx
// 00540714  894dfc               mov dword ptr [ebp - 4], ecx
// 00540717  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0054071a  50                   push eax
// 0054071b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054071e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00540721  52                   push edx
// 00540722  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00540725  83c004               add eax, 4
// 00540728  50                   push eax
// 00540729  e832570000           call 0x545e60
// 0054072e  83c40c               add esp, 0xc
// 00540731  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540734  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00540737  52                   push edx
// 00540738  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054073b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0054073e  83e904               sub ecx, 4
// 00540741  51                   push ecx
// 00540742  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540745  e8560d0000           call 0x5414a0
// 0054074a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054074d  8b4210               mov eax, dword ptr [edx + 0x10]
// 00540750  83e804               sub eax, 4
// 00540753  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540756  894110               mov dword ptr [ecx + 0x10], eax
// 00540759  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0054075c  52                   push edx
// 0054075d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00540760  50                   push eax
// 00540761  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540764  51                   push ecx
// 00540765  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540768  e8f30b0000           call 0x541360
// 0054076d  8b4508               mov eax, dword ptr [ebp + 8]
// 00540770  8be5                 mov esp, ebp
// 00540772  5d                   pop ebp
// 00540773  c20c00               ret 0xc

extern void __cdecl move_range(int*, int*, int*);

struct S {
    char padding[16];
    int* end;

    void destroy_range(int*, int*);
    void make_result(int*, int, int*);
    int* f(int*, int, int*);
};

#pragma optimize("", off)

int* S::f(int* result, int context, int* position)
{
    move_range(position + 1, end, position);
    destroy_range(end - 1, end);
    end = end - 1;
    make_result(result, context, position);
    return result;
}
