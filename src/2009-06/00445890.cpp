// roc 2009-06 00445890  unit: CRobloxApp  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00445890
//
// 00445890  56                   push esi
// 00445891  8bf1                 mov esi, ecx
// 00445893  8b06                 mov eax, dword ptr [esi]
// 00445895  8b08                 mov ecx, dword ptr [eax]
// 00445897  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044589a  03c8                 add ecx, eax
// 0044589c  ff1520e48900         call dword ptr [0x89e420]
// 004458a2  85c0                 test eax, eax
// 004458a4  7418                 je 0x4458be
// 004458a6  8b06                 mov eax, dword ptr [esi]
// 004458a8  8b10                 mov edx, dword ptr [eax]
// 004458aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 004458ad  03c8                 add ecx, eax
// 004458af  ff1520e48900         call dword ptr [0x89e420]
// 004458b5  8bc8                 mov ecx, eax
// 004458b7  5e                   pop esi
// 004458b8  ff251ce48900         jmp dword ptr [0x89e41c]
// 004458be  5e                   pop esi
// 004458bf  c3                   ret 
// copied from an identical function in another client (function ?Unlock@CIDEDocManager@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Stream {
    int* offsets;
};

struct Buffer;

extern Buffer* (__thiscall* rdbuf)(const void*);
extern void (__thiscall* unlock)(Buffer*);

struct CIDEDocManager {
    Stream* stream;
    void Unlock();
};

void CIDEDocManager::Unlock()
{
    if (rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]))
        unlock(rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]));
}