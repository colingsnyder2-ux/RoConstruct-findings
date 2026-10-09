// from server: 100% by colin
// roc 2007-08 006e3400  unit: CXTPDockingPaneTabbedContainer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3400
//
// 006e3400  56                   push esi
// 006e3401  57                   push edi
// 006e3402  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e3406  85ff                 test edi, edi
// 006e3408  8bf1                 mov esi, ecx
// 006e340a  7446                 je 0x6e3452
// 006e340c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e3410  894668               mov dword ptr [esi + 0x68], eax
// 006e3413  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 006e3416  894e58               mov dword ptr [esi + 0x58], ecx
// 006e3419  8b5728               mov edx, dword ptr [edi + 0x28]
// 006e341c  89565c               mov dword ptr [esi + 0x5c], edx
// 006e341f  8b473c               mov eax, dword ptr [edi + 0x3c]
// 006e3422  894670               mov dword ptr [esi + 0x70], eax
// 006e3425  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 006e3428  894e74               mov dword ptr [esi + 0x74], ecx
// 006e342b  8b5744               mov edx, dword ptr [edi + 0x44]
// 006e342e  895678               mov dword ptr [esi + 0x78], edx
// 006e3431  8b4748               mov eax, dword ptr [edi + 0x48]
// 006e3434  6a01                 push 1
// 006e3436  57                   push edi
// 006e3437  8bce                 mov ecx, esi
// 006e3439  89467c               mov dword ptr [esi + 0x7c], eax
// 006e343c  e88ff7ffff           call 0x6e2bd0
// 006e3441  8b16                 mov edx, dword ptr [esi]
// 006e3443  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 006e3449  6a01                 push 1
// 006e344b  6a01                 push 1
// 006e344d  57                   push edi
// 006e344e  8bce                 mov ecx, esi
// 006e3450  ffd0                 call eax
// 006e3452  5f                   pop edi
// 006e3453  5e                   pop esi
// 006e3454  c20800               ret 8

struct CXTPDockingPaneTabbedContainer
{
    void func_006e2bd0(void*, int);
    void func_006e3400(void*, int);
};

void CXTPDockingPaneTabbedContainer::func_006e3400(void* p, int n)
{
    if (p != 0)
    {
        *(int*)((char*)this + 0x68) = n;
        *(int*)((char*)this + 0x58) = *(int*)((char*)p + 0x24);
        *(int*)((char*)this + 0x5c) = *(int*)((char*)p + 0x28);
        *(int*)((char*)this + 0x70) = *(int*)((char*)p + 0x3c);
        *(int*)((char*)this + 0x74) = *(int*)((char*)p + 0x40);
        *(int*)((char*)this + 0x78) = *(int*)((char*)p + 0x44);
        *(int*)((char*)this + 0x7c) = *(int*)((char*)p + 0x48);
        func_006e2bd0(p, 1);
        (*(void(__thiscall**)(void*, void*, int, int))(*(int*)this + 0x13c))(this, p, 1, 1);
    }
}
