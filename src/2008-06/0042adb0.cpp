// from server: 80% by coldek
// roc 2008-06 0042adb0  unit: EventHandler  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042adb0
//
// 0042adb0  53                   push ebx
// 0042adb1  56                   push esi
// 0042adb2  8b742414             mov esi, dword ptr [esp + 0x14]
// 0042adb6  57                   push edi
// 0042adb7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0042adbb  68cc018500           push 0x8501cc
// 0042adc0  33db                 xor ebx, ebx
// 0042adc2  57                   push edi
// 0042adc3  891e                 mov dword ptr [esi], ebx
// 0042adc5  e876ffffff           call 0x42ad40
// 0042adca  83c408               add esp, 8
// 0042adcd  85c0                 test eax, eax
// 0042adcf  7416                 je 0x42ade7
// 0042add1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042add5  8906                 mov dword ptr [esi], eax
// 0042add7  8b08                 mov ecx, dword ptr [eax]
// 0042add9  8b5104               mov edx, dword ptr [ecx + 4]
// 0042addc  50                   push eax
// 0042addd  ffd2                 call edx
// 0042addf  5f                   pop edi
// 0042ade0  5e                   pop esi
// 0042ade1  8bc3                 mov eax, ebx
// 0042ade3  5b                   pop ebx
// 0042ade4  c20c00               ret 0xc
// 0042ade7  681c028500           push 0x85021c
// 0042adec  57                   push edi
// 0042aded  e84effffff           call 0x42ad40
// 0042adf2  83c408               add esp, 8
// 0042adf5  85c0                 test eax, eax
// 0042adf7  75d8                 jne 0x42add1
// 0042adf9  5f                   pop edi
// 0042adfa  5e                   pop esi
// 0042adfb  b802400080           mov eax, 0x80004002
// 0042ae00  5b                   pop ebx
// 0042ae01  c20c00               ret 0xc

// from server: 79% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Interface {virtual long __stdcall query(const void*,void**)=0;virtual unsigned long __stdcall retain()=0;};
extern const unsigned int iid1[4],iid2[4];
extern int __cdecl compare(const void*,const void*);
long __stdcall query(const void*iid,Interface*object,void**result){
 long status=0;
 *result=0;
 if(compare(iid,iid1)){
  *result=object;object->retain();return status;
 }
 if(compare(iid,iid2)){*result=object;object->retain();return status;}
 return (long)0x80004002;
}
