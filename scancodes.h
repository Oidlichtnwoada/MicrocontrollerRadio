#ifndef SCANCODES_H
#define SCANCODES_H

// Unshifted characters
uint8_t const PROGMEM unshifted[][2] = {
{0x0d,9},
{0x0e,'|'},
{0x15,'q'},
{0x16,'1'},
{0x1a,'y'},
{0x1b,'s'},
{0x1c,'a'},
{0x1d,'w'},
{0x1e,'2'},
{0x21,'c'},
{0x22,'x'},
{0x23,'d'},
{0x24,'e'},
{0x25,'4'},
{0x26,'3'},
{0x29,' '},
{0x2a,'v'},
{0x2b,'f'},
{0x2c,'t'},
{0x2d,'r'},
{0x2e,'5'},
{0x31,'n'},
{0x32,'b'},
{0x33,'h'},
{0x34,'g'},
{0x35,'z'},
{0x36,'6'},
{0x39,','},
{0x3a,'m'},
{0x3b,'j'},
{0x3c,'u'},
{0x3d,'7'},
{0x3e,'8'},
{0x41,','},
{0x42,'k'},
{0x43,'i'},
{0x44,'o'},
{0x45,'0'},
{0x46,'9'},
{0x49,'.'},
{0x4a,'-'},
{0x4b,'l'},
{0x4c,'o'},
{0x4d,'p'},
{0x4e,'+'},
{0x52,'o'},
{0x54,'o'},
{0x55,'\\'},
{0x5a,'\n'},
{0x5b,'x'},
{0x5d,'\''},
{0x61,'<'},
{0x66,'\b'},
{0x69,'1'},
{0x6b,'4'},
{0x6c,'7'},
{0x70,'0'},
{0x71,','},
{0x72,'2'},
{0x73,'5'},
{0x74,'6'},
{0x75,'8'},
{0x79,'+'},
{0x7a,'3'},
{0x7b,'-'},
{0x7c,'*'},
{0x7d,'9'},
{0,0}
};
// Shifted characters
uint8_t const PROGMEM shifted[][2] = {
{0x0d,9},
{0x0e,'x'},
{0x15,'Q'},
{0x16,'!'},
{0x1a,'Y'},
{0x1b,'S'},
{0x1c,'A'},
{0x1d,'W'},
{0x1e,'"'},
{0x21,'C'},
{0x22,'X'},
{0x23,'D'},
{0x24,'E'},
{0x25,'x'},
{0x26,'#'},
{0x29,' '},
{0x2a,'V'},
{0x2b,'F'},
{0x2c,'T'},
{0x2d,'R'},
{0x2e,'%'},
{0x31,'N'},
{0x32,'B'},
{0x33,'H'},
{0x34,'G'},
{0x35,'Z'},
{0x36,'&'},
{0x39,'L'},
{0x3a,'M'},
{0x3b,'J'},
{0x3c,'U'},
{0x3d,'/'},
{0x3e,'('},
{0x41,';'},
{0x42,'K'},
{0x43,'I'},
{0x44,'O'},
{0x45,'='},
{0x46,')'},
{0x49,':'},
{0x4a,'_'},
{0x4b,'L'},
{0x4c,'x'},
{0x4d,'P'},
{0x4e,'?'},
{0x52,'x'},
{0x54,'x'},
{0x55,'`'},
{0x5a,'\n'},
{0x5b,'^'},
{0x5d,'*'},
{0x61,'>'},
{0x66,'\b'},
{0x69,'1'},
{0x6b,'4'},
{0x6c,'7'},
{0x70,'0'},
{0x71,','},
{0x72,'2'},
{0x73,'5'},
{0x74,'6'},
{0x75,'8'},
{0x79,'+'},
{0x7a,'3'},
{0x7b,'-'},
{0x7c,'*'},
{0x7d,'9'},
{0,0}
};


#endif
