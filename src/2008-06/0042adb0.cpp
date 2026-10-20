// from server: 79% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Interface {virtual long __stdcall query(const void*,void**)=0;virtual unsigned long __stdcall retain()=0;};
extern const unsigned int iid1[4],iid2[4];
extern int __cdecl compare(const void*,const void*);
long __stdcall query(Interface*object,const void*iid,void**result){
 *result=0;
 if(compare(iid,iid1)){
  *result=object;object->retain();return 0;
 }
 if(compare(iid,iid2)){*result=object;object->retain();return 0;}
 return (long)0x80004002;
}
