# i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < s t d l i b . h >  
 # i n c l u d e   < l o c a l e . h >  
  
 i n t   m a i n ( ) {  
  
  
 / / K a r a k t e r i n   A S C I I   d e e r i n i   v e r e n   k o d  
 s e t l o c a l e ( L C _ A L L , " T u r k i s h " ) ;  
  
         c h a r   k a r a k t e r ;  
  
         p r i n t f ( " B i z e   b i r   k a r a k t e r   s � y l e   s a n a   o n u n   A S C I I   d e � e r i n i   s � y l e y e y i m . . . \ n " ) ;  
         s c a n f ( " % c " , & k a r a k t e r ) ;  
  
 / / 6 5 - 9 0   K � � � k   H a r f  
 / / 9 7 - 1 2 2   B � y � k   H a r f  
  
         i n t   k a r a k t e r i n A s c i i D e g e r i   =   k a r a k t e r ;  
  
         i f   ( k a r a k t e r i n A s c i i D e g e r i > = 6 5   & &   k a r a k t e r i n A s c i i D e g e r i   < =   9 0 ) {  
     p r i n t f ( " % d   b � y � k   b i r   h a r f t i r . . . \ n " , k a r a k t e r i n A s c i i D e g e r i ) ;  
 }  
  
  
         e l s e   i f   ( k a r a k t e r i n A s c i i D e g e r i > = 9 7   & &   k a r a k t e r i n A s c i i D e g e r i < = 1 2 2 ) {  
       p r i n t f ( " % d   k � � � k   h a r f t i r . . . \ n " , k a r a k t e r i n A s c i i D e g e r i ) ;  
 }  
  
  
       e l s e {  
       p r i n t f ( " L � t f e n   a - z   y a   d a   A - Z   a r a l 11n d a   b i r   k a r a k t e r   g i r i n i z . . . " ) ;  
 }  
  
 r e t u r n   0 ;  
 }  
 