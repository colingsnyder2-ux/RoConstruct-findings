// from server: 80% by coldek
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
