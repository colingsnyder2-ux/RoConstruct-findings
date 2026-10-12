// from server: 78% by king_originala
extern float* _FInf;
extern float* _FNan;
extern float* _FSnan;

int f(float value)
{
    return *_FInf == value ||
           -*_FInf == value ||
           *_FNan == value ||
           *_FSnan == value;
}
