// roc 2012-06 00435c70  unit: CMainFrame  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435c70
//
// 00435c70  56                   push esi
// 00435c71  8bf1                 mov esi, ecx
// 00435c73  8b06                 mov eax, dword ptr [esi]
// 00435c75  8b08                 mov ecx, dword ptr [eax]
// 00435c77  8b4904               mov ecx, dword ptr [ecx + 4]
// 00435c7a  03c8                 add ecx, eax
// 00435c7c  ff151427b200         call dword ptr [0xb22714]
// 00435c82  85c0                 test eax, eax
// 00435c84  7418                 je 0x435c9e
// 00435c86  8b06                 mov eax, dword ptr [esi]
// 00435c88  8b10                 mov edx, dword ptr [eax]
// 00435c8a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00435c8d  03c8                 add ecx, eax
// 00435c8f  ff151427b200         call dword ptr [0xb22714]
// 00435c95  8bc8                 mov ecx, eax
// 00435c97  5e                   pop esi
// 00435c98  ff251827b200         jmp dword ptr [0xb22718]
// 00435c9e  5e                   pop esi
// 00435c9f  c3                   ret 
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