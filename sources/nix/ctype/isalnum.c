const unsigned char * const _ctype_;

int isalnum(int c)
{ return _ctype_[1+c]&7; }
