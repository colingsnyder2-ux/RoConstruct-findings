// from server: 69% by atomic.potato
struct S {
  char _0[8];
  void* p8;
  void* pc;
  void* p10;
  char _18[4];
  float f18;
};
extern "C" void __stdcall sub_518470(float);
void __stdcall f(S* p, float* out) {
  float* ecx = (float*)p->p8;
  float* eax = (float*)((char*)p->p10 + 0x94);
  float* edx = (float*)((char*)p->pc + 0xb8);
  float t2 = eax[8] * ecx[2] + eax[7] * ecx[1] + eax[6] * ecx[0] + eax[11];
  float t1 = eax[5] * ecx[2] + eax[4] * ecx[1] + eax[3] * ecx[0] + eax[10];
  float t0 = eax[0x9c/4] * ecx[2] + eax[1] * ecx[1] + eax[0] * ecx[0] + eax[9];
  out[4] = t0;
  out[5] = t1;
  out[6] = t2;
  float a = out[4] - edx[0];
  float b = out[5] - edx[1];
  float c = out[6] - edx[2];
  out[0] = a;
  out[1] = b;
  out[2] = c;
  sub_518470(*(float*)0x826e70);
  out[3] = *(float*)0x826e70 - p->f18;
}
